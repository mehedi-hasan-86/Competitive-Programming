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

    string nmbrs = "";
    int cntSign = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='+') cntSign++;
        else nmbrs +=s[i];
    }

    sort(nmbrs.begin(), nmbrs.end());
    for(int i=0; i<nmbrs.size(); i++){
        cout << nmbrs[i];
        if(cntSign>0){
            cout << '+';
            cntSign--;
        }
    }
    cout << endl;


    return 0;
}