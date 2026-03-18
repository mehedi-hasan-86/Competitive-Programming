#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

string largeOddNum(string &s){

    int idx = -1;
    for(int i=s.length()-1; i>=0; i--){
        if((s[i]-'0')%2==1){
            idx = i;
            break;
        }
    }
    if(idx==-1) return "";
    int i=0;
    while(i<=idx && s[i]=='0') i++;

    return s.substr(i, idx-i+1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    cout << largeOddNum(s) << endl;

    return 0;
}