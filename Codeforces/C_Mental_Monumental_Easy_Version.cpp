#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

bool check(int k, vi &a){
    multiset<int> st;

    for(int x : a){
        st.insert(x);
    }

    for(int x = k-1; x>=0; x--){
        auto it = st.find(x);
        if(it != st.end()){
            st.erase(it);
            continue;
        }
        it = st.upper_bound(2*x);
        if(it == st.end()) return false;

        st.erase(it);
    }
    return true;
}

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
        int l = 0, h = n, ans = 0;
        while(l<=h){
            int m = l + (h-l)/2;

            if(check(m, a)){
                ans = m;
                l = m+1;
            }else{
                h = m-1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}