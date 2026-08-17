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

// int minElements(vector<int>& arr, int target){
//     vector<int> dp(target + 1, INT_MAX);

//     dp[0] = 0;
//     for (int num : arr) {
//         for (int sum = target; sum >= num; sum--){
//             if (dp[sum - num] != INT_MAX) {
//                 dp[sum] = min(dp[sum], dp[sum - num] + 1);
//             }
//         }
//     }
//     return dp[target] == INT_MAX ? -1 : dp[target];
// }

vi cntTwoP(int n){
    vi cntT;
    for(int i=1; i<=n; i++){
        int val = i;
        int cnt =  0;

        while(val%2==0){
            val /=2;
            cnt++;
        }
        if(cnt != 0 ) cntT.push_back(cnt);
    }
    return cntT;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vll a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int cnt2 = 0;
        for(int i=0; i<n; i++){
            while(a[i]>0 && a[i]%2==0){
                cnt2++;
                a[i] /=2;
            }
        }
        int need = n-cnt2;
        if(need <=0){
            cout << 0 << endl;
            continue;
        }
        // cout << need << endl;
        vi twoP = cntTwoP(n);
        // int val = accumulate(twoP.begin(), twoP.end(),0);
        // if(val<need){
        //     cout <<"-1" << endl;
        //     continue;
        // }
        // for(auto x : twoP){
        //     cout << x << " ";
        // }
        // cout << endl;

        // int ans = minElements(twoP, need);
        // cout << ans << endl;

        sort(twoP.rbegin(), twoP.rend());
        int ans = 0;
        int got = 0;
        for(auto x : twoP){
            got +=x;
            ans++;

            if(got>=need){
                break;
            }
        }
        if(got<need){
            cout << -1 << endl;
        }else{
            cout << ans << endl;
        }

    }

    return 0;
}