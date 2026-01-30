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

      if(a[n-2]>a[n-1]){
        cout << -1 << endl;
        continue;
      }

      if(a[n-1]<0){
        bool sorted = true;
        for(int i=1; i<n; i++){
            if(a[i-1]>a[i]){
                sorted = false;
                break;
            }
        }
      if(sorted){
        cout << 0 << endl;
      }else{
        cout << -1 << endl;
      }
      continue;
      }

      cout << n-2 << endl;
      for(int i=1; i<=n-2; i++){
        cout << i << " " << n-1 << " " << n << endl;
      }


    }

    return 0;
}