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
        int n,k;
        cin >> n >> k;

        vi c(n+1);
        for(int i=1; i<=n; i++) cin >> c[i];

        vector<int> last(k+1,0);
        vector<int> max1(k+1,0), max2(k+1,0);

        for(int i=1; i<=n; i++){
            int color = c[i];
            int gap = i-last[color]-1;

            if(gap>max1[color]){
                max2[color] = max1[color];
                max1[color] = gap;
            }else if(gap> max2[color]){
                max2[color] = gap;
            }
            last[color] = i;
        }

        for(int color=1; color<=k; color++){
            int gap = n-last[color];
            if(gap>max1[color]){
                max2[color] = max1[color];
                max1[color] = gap;
            }else if(gap > max2[color]){
                max2[color] = gap;
            }
        }
        int ans = INT_MAX;
        for(int color = 1; color <= k; color++){
            int best = max(max1[color] /2, max2[color]);
            ans = min(ans, best);
        }
        cout << ans << endl;


    }

    return 0;
}