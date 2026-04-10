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
      for(int i=0; i<n; i++){
        cin >> a[i];
      }

      vi res(7,1e9), newRes(7,1e9);

      for(int i=1; i<=6; i++){
        res[i] = (a[0] != i);
      }

      for(int i =1; i<n; i++){
      newRes.assign(7, 1e9);

      for(int j=1; j<=6; j++){
        for(int k=1; k<=6; k++){

            if(j != k && k != 7-j){
                newRes[j] = min(newRes[j], res[k] + (a[i] != j));
            }
        }
      }
      res = newRes;
      }

      int ans = 1e9;
      for(int i=1; i<=6; i++){
        ans = min(ans, res[i]);
      }
      cout << ans << endl;


    }

    return 0;
}