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
        string s;
        cin >> n >> s;

        int idx = 0;
        set<int> st;
        st.insert(idx);
        for(int i=0; i<n; i++){
            if(s[idx]=='R') idx++;
            else idx--;
            st.insert(idx);
        }
        cout << st.size() << endl;
    }

    return 0;
}