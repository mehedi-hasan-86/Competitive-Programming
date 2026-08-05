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

        lli g1 = 0, g2 = 0;
        for(int i=0; i<n; i+=2){
            g1 = __gcd(g1,a[i]);
        }
        for(int i=1; i<n; i+=2){
            g2 = __gcd(g2,a[i]);
        }

        bool isC = true;
        for(int i=0; i<n; i+=2){
            if(a[i]%g2 ==0){
                isC = false;
                break;
            }
        }
        if(isC){
            cout << g2 << endl;
            continue;
        }


        isC = true;
        for(int i=1; i<n; i+=2){
            if(a[i]%g1 ==0){
                isC = false;
                break;
            }
        }



        if(isC){
            cout << g1 << endl;
        }else{
            cout << 0 << endl;
        }

    }

    return 0;
}