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

        vl a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int cnt[30] = {0};

        for(int i=0; i<n; i++){
            for(int b=0; b<30; b++){
                if(a[i] &(1LL<<b)){
                    cnt[b]++;
                }
            }
        }
        int g = 0;
        for(int b=0; b<30; b++){
            if(cnt[b]>0){
                if(g==0){
                    g = cnt[b];
                }else{
                    g = __gcd(g,cnt[b]);
                }
            }
        }

        vi ans;
        if(g==0){
            for(int k=1; k<=n; k++){
                ans.push_back(k);
            }
        }else{
            for(int k=1; k*1LL*k <=g; k++){
                if(g%k==0){
                    if(k<=n) ans.push_back(k);
                    if(g/k != k && g/k <=n) ans.push_back(g/k);
                }
            }
            sort(ans.begin(), ans.end());
        }
        for(int i=0; i<(int)ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}