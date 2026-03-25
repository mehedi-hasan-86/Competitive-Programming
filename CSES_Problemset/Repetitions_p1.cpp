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

    string s;
    cin >> s;

    int cnt = 1;
    int ans = 1;
    for(int i=0; i<s.size()-1; i++){
        if(s[i]==s[i+1]){
            cnt++;
        }else{
            cnt = 1;
        }
        ans = max(cnt,ans);
    }
    cout << ans << endl;

    return 0;
}