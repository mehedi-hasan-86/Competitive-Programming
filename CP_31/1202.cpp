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

        // int mx = *max_element(a.begin(), a.end());
        for(int k = 1; k<=60; k++){
            set<lli> st;
            for(int i=0; i<n; i++){
                if(st.size()>2) break;
                st.insert(a[i]%(1LL<<k));
            }
            if(st.size()==2){
                cout << (1LL<<k) << endl;
                break;
            }
        }
    }

    return 0;
}