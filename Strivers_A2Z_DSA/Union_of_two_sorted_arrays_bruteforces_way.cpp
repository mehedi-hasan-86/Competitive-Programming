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

    int n,m;
    cin >> n >> m;

    vi a(n), b(m);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];

    set<int> st;
    for(int i=0; i<n; i++){
        st.insert(a[i]);
    }
    for(int i=0; i<m; i++){
        st.insert(b[i]);
    }

    for(auto it : st){
        cout << it << " ";
    }
    cout << endl;


    return 0;
}