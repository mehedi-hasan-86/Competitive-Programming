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
    lli n;
    cin >> n;

    lli total_sum = n*(n+1)/2;
    if(total_sum%2==0){
        cout <<"YES" << endl;
        
        int vis[n+1] = {0};
        lli  target_sum = 0;
        lli val = 0;
        
        for(lli i=n; i>=1; i--){
            target_sum += i;
            if(target_sum < total_sum/2){
            vis[i] = 1;
            val = target_sum;
           }
        }
        vis[total_sum/2 - val]=1;
        int cnt1 = count(vis, vis+n+1, 1);
        cout << cnt1 << endl;
        for(int i=1; i<=n; i++){
            if(vis[i]==1){
                cout << i << " ";
            }
        }
        cout << endl;
        cout << count(vis, vis+n+1,0)-1 << endl;
        for(int i=1; i<=n; i++){
            if(vis[i]==0){
                cout << i << " ";
            }
        }
        cout << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}