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

        int l = 0, r = n-1;
        int mn = 1, mx= n;
        while(l<=r){
          
          if(a[l]==mn){
            l++;
            mn++;
          }else if(a[l]== mx){
            l++;
            mx--;
          }else if(a[r]==mn){
            r--;
            mn++;
          }else if(a[r]==mx){
            r--;
            mx--;
          }else{
            break;
          }

          
    }
    
    if(l<r){
           cout << l+1 << " " << r +1 << endl;
        }else{
            cout << -1 <<endl;
        }
}


    return 0;
}