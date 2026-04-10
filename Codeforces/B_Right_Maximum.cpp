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

        vi a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        set<pair<int,int>> s;
        for(int i=0; i<n;i++){
            s.insert({a[i],i});
        }
        int ans = 0;
        int r = n-1;
        while(!s.empty()){

            // int mx = *max_element(a.begin(), a.begin()+n);
            auto it = s.upper_bound({INT_MAX,r});
            if(it==s.begin()) break;
            --it;
            int idx = it->second;
            ans++;

            for(int i=idx; i<=r; i++){
                s.erase({a[i],i});
            }
            r = idx-1;
            // int idx = -1;
            // for(int i=0; i<n; i++){
            //     if(a[i]==mx){
            //         idx = i;
            //     }
            // }
            // ans++;
            // n = idx;
        }
        cout << ans << endl;
    }

    return 0;
}