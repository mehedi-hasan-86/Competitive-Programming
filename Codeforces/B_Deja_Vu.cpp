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
            int n,q;
            cin >> n >> q;

            vl a(n);
            for(int i=0; i<n; i++){
                cin >> a[i];
            }

            vi b(q);
            for(int i=0; i<q; i++){
                cin >> b[i];
            }


            vi x;
            vector<bool> vis(31,false);

            for(int i=0; i<q; i++){
                if(!vis[b[i]]){
                    vis[b[i]] = true;
                    x.push_back(b[i]);
                }
            }

            for(int i=0; i<x.size(); i++){
                    for(int j=0; j<n; j++){
                        if((a[j]&((1LL <<x[i])-1))==0){
                            a[j] += ((1LL<<(x[i]-1)));
                        }
                }
            }

            for(int i=0; i<n; i++){
                cout << a[i] << " ";
            }
            cout << endl;

        }

    return 0;
}