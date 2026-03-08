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

    string ss;
    for(int i=0; i<5; i++){
        cin >> ss;

        if(ss[0]==s[0] || ss[1]==s[1]){
            cout <<"YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}