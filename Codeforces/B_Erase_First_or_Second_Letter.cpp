
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

        vector<int> first(26,-1);

        for(int i=0; i<n; i++){
            int c =s[i]-'a';
            if(first[c]==-1){
                first[c]=i;
            }
        }
        lli ans = 0;

        for(int c = 0; c<26; c++){
            if(first[c] != -1){
               ans +=(n-first[c]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}