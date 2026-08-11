#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;

vi slidingWindowMinimum(vi &a, int k){
    int n = a.size();

    vi res;
    deque<int> dq;
    for(int i=0; i<n; i++){
        while(!dq.empty() && dq.front() < i-k+1){
            dq.pop_front();
        }
        while(!dq.empty() && a[dq.back()] > a[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        if(i>=k-1){
            cout << "window [" << i-k+1 << "..." << i << "]: ";
            for(int j=i-k+1; j<=i; j++){
                cout << a[j] << " ";
            }
            cout << "-> Min = " << a[dq.front()] << endl;
            res.push_back(a[dq.front()]);
        }
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    cin >> n >> k;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vi res = slidingWindowMinimum(a,k);
    cout << endl;

    cout <<"Final answer : ";
    for(auto x : res){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}