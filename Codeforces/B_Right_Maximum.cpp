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
        int n; cin >> n;
        vi a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        multiset<int> st(a.begin(), a.end());
        int cnt = 0;

        for(int i=n-1; i>=0; i--){
            int mx = *st.rbegin();
            if(a[i]==mx){
                st.erase(prev(st.end()));
                cnt++;
            }else{
                st.erase(st.find(a[i])); 
            }
             
    }
    cout << cnt << endl;

}

    return 0;
}