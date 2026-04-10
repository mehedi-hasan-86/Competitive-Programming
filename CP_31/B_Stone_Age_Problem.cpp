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

    int n,q;
    cin >> n >>  q;

    vl a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    lli sum = accumulate(a.begin(), a.end(), 0LL);

    vector<bool> vis(n, false);
    lli last =0;

    bool global_set = false;

    while(q--){
        int t;
        cin >> t;
        if(t==1){
            int i,x;
            cin >> i >> x;
            i--;

            if(global_set){
            if(!vis[i]){
                sum -=last;
                vis[i] = true;
            }else{
                sum -=a[i];
            }

            }else{
                sum -=a[i];
                vis[i] = true;
            }

         

            a[i] = x;
            sum +=x;
        }else{

            int x;
            cin >> x;

            last = x;
            sum = x*(1LL)*n;

            global_set = true;

            sum = x*(1LL)*n;
            fill(vis.begin(), vis.end(), false);

        }

        cout << sum << endl;

    }

    return 0;
}