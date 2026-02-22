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
        string s;
        cin >> s;

        int ans = 0;

        for(int i=0; i<n; i++){
            string ss = s.substr(i) + s.substr(0,i);

            int cnt = 1;
            for(int i=1; i<ss.size(); i++){
                if(ss[i] != ss[i-1]) cnt++;
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;

    }
   
    return 0;
}