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

        vi p(n);
        for(int i=0; i<n; i++){
            cin >> p[i];
        }

        if(n>1){
            int idx = 0;
            for(int i=0; i<n; i++){
                if(p[i]==n){
                    idx  = i;
                    break;
                }
            }
            swap(p[0], p[idx]);
        }
        for(int x : p){
        cout << x << " ";
      }
      cout << endl;
    
  

    }






    return 0;
}