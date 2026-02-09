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
        int n,m;
        cin >> n >> m;

        vl a(n);
        vl cnt(m,0);
        for(int i=0; i<n; i++){
            lli x;
            cin >> x;
            cnt[x%m]++;
        }
        int ans = 0;
        if(cnt[0]>0){
            ans++;
        }

        for(int r = 1; r<=m/2; r++){
            int r2 = m-r;

            if(r==r2){
                if(cnt[r]>0){
                    ans++;
                }
            }else{
                if(cnt[r]==0 && cnt[r2]==0){
                    continue;
                }

            ans++;

            lli diff = abs(cnt[r]- cnt[r2]);
            if(diff>1){
                ans +=diff-1;
            }
            }

        }
          cout << ans << endl;

    
    }
  

    return 0;
}