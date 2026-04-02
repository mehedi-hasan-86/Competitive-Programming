#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vl u(n),s(n);
        for(int i=0; i<n; i++) cin >> u[i];
        for(int i=0; i<n; i++) cin >> s[i];

        map<int, vector<lli>> mp;
        for(int i=0; i<n; i++){
            mp[u[i]].push_back(s[i]);
        }

        vl ans(n+1,0);
        for(auto &it : mp){
            // cout << it.first << "->";

            // sort(it.second.rbegin(), it.second.rend());
        //     for(auto x : it.second){
        //         cout << x << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;

        auto &vec = it.second;
        sort(vec.rbegin(), vec.rend());
            for(int i=1; i<vec.size(); i++){
                vec[i] +=vec[i-1];
            }
        int sz = vec.size();
        for(int k=1; k<=sz; k++){
          int take = (sz/k)*k;

          if(take>0){
            ans[k] +=vec[take-1];
          }
        }
        }

    for(int k = 1; k <= n; k++){
    cout << ans[k] << " ";
    }
      cout << endl;
    }

    return 0;
}