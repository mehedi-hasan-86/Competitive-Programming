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
        int n,m;
        cin >> n >> m;

        vl a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        lli b;
        cin >> b;

        lli prev = LLONG_MIN;
        bool isC = true;

        for(int i=0; i<n; i++){
            lli x = a[i];
            lli y = b - a[i];

            lli small = min(x,y);
            lli large = max(x,y);

            if(small>= prev){
                prev = small;
            }else if(large>=prev){
                prev = large;
            }else{
                isC = false;
                break;
            }   
        }
        cout << (isC ? "YES":"NO") << endl;
    }

    return 0;
}