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
        string s;
        cin >> s;

        int l = 0, r = s.size()-1;
        while(s[l]=='0'){
            l++;
        }
        while(s[r]=='0'){
            r--;
        }
        string sub = s.substr(l, r-l+1);
        int cnt = 0;
        for(int i=0; i<sub.size(); i++){
            if(sub[i]=='0'){
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}