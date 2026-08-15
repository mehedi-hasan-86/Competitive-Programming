#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
#define endl '\n'
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e6;

int countMeetInMiddle(vi &a, int target){
    int n = a.size();
    int n1 = n/2;
    int n2 = n-n1;

    vi A(a.begin(), a.begin()+n1);
    vi B(a.begin()+n1, a.end());

    vector<pair<int,int>> sums1;
    for(int mask = 0; mask < (1<<n1); mask++){
        int sum = 00;
        for(int i=0; i<n1; i++){
            if(mask & (1<<i)) sum += A[i];
        }
        sums1.push_back({sum, mask});
    }
    vector<pair<int,int>> sums2;
    for(int mask = 0; mask<(1<<n2); mask++){
        int sum = 0;
        for(int i=0; i<n2; i++){
            if(mask & (1<<i)) sum += B[i];
        }
        sums2.push_back({sum, mask});
    }
    sort(sums1.begin(), sums1.end());
    sort(sums2.begin(), sums2.end());

    int cnt =0;
    for(auto x : sums1){
        int s1 =x.first;
        int mask1 = x.second;
        int need = target - s1;
        auto range = equal_range(sums2.begin(), sums2.end(), make_pair(need, 0), [](pair<int,int> a, pair<int,int> b) {return a.first < b.first;});
     cnt += range.second - range.first;
    }
    return cnt;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vi arr = {2,4,5,9};
    int target = 9;

    int cnt = countMeetInMiddle(arr, target);
    cout << "Number of subsets summing to " << target << ": " << cnt << endl;

    return 0;
}