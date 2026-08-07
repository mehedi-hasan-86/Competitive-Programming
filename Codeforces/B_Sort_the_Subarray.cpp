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

        vi a(n), b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        int L = 0;
        for(int i=0; i<n; i++){
            if(a[i]  != b[i]){
                L = i;
                break;
            }
        }

        while(b[L]>=a[L-1] && L>0){
            L--;
        }

        int R = 0;
        for(int i=n-1; i>=0; i--){  
            if(a[i] !=b[i]){
                R = i;
                break;
            }
        }

        while(b[R]<=a[R+1] && R<n-1){
            R++;
        }
        cout << (L+1) << " " << (R+1) << endl;





    
    }

    return 0;
}