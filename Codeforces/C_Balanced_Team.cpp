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
const int N = 1e6;

int mxLen(vi &a, int k){
    int left = 0;
    int sum = 0;
    int ans = 0;

    for(int right = 0; right <a.size(); right++){
        sum +=a[right];

        while(sum>k){
            sum -= a[left];
            left++;
        }
        ans = max(ans, right-left+1);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    vi res(n-1);
    for(int i=0; i<n-1; i++){
        res[i] =a[i+1]-a[i];
    }
    cout << mxLen(res, 5) + 1 << endl;

    return 0;
}