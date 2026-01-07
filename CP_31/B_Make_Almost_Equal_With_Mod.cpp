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
        
        for(int j = 1; j<=60; j++){
            lli k = (1LL<<j);
            set<lli> st;

            for(int i=0; i<n; i++){
                st.insert(a[i]%k);
                if(st.size()>2) break;
            }
            if(st.size()==2){
                cout << k <<endl;
                break; 
            }
        }
    }
    return 0;
}