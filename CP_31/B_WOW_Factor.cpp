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

    lli tlW = 0;

    for(int i=0; i<s.size()-1; i++){
        if(s[i]=='v' & s[i+1]=='v'){
            tlW++;
        }
    }

    lli ans = 0;
    lli lftW = 0;
    for(int i=1; i<s.size(); i++){
        if(s[i]=='v' && s[i-1]=='v') lftW++;
        if(s[i]=='o') ans += lftW *(tlW - lftW);
    }
    cout << ans << endl;

    return 0;
}