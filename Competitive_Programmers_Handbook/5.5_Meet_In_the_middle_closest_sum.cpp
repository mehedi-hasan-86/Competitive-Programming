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

int closestSum(vi &a, int target){
    int n = a.size();
    int n1 = n/2;
    int n2 = n-n1;

    vi A(a.begin(), a.begin()+n1);
    vi B(a.begin()+n1, a.end());

    vi sums1, sums2;
    for(int mask = 0; mask<(1<<n1); mask++){
        int sum = 0;
        for(int i=0; i<n1; i++){
            if(mask & (1<<i)) sum += A[i];
        }
        sums1.push_back(sum);
    }
    for(int mask = 0; mask < (1<<n2); mask++){
        int sum = 0;
        for(int i=0; i<n2; i++){
            if(mask &(1<<i)) sum += B[i];
        }
        sums2.push_back(sum);
    }
    sort(sums2.begin(), sums2.end());

    int best = INT_MAX;
    for(int s1 : sums1){
        int need = target - s1;
        auto it = lower_bound(sums2.begin(), sums2.end(), need);

        if(it != sums2.end()){
            best = min(best, abs(target- (s1 + *it)));
        }
        if(it != sums2.begin()){
            --it;
            best = min(best, abs(target-(s1+*it)));
        }
    }
    return best;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vi arr = {2,4,5,9};
    int target = 10;

    int diff = closestSum(arr, target);
    cout <<"CLosest sum to " << target <<" differs by " << diff << endl;

    return 0;
}