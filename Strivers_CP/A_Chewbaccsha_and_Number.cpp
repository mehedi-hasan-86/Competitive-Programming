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

    int n  = s.size();
    for(int i=0; i<n; i++){
        int d = s[i]-'0';
        int nd = 9-d;
        if(nd<d){
            if(i==1 && i==0) continue;
            s[i] = '0'+nd;
        }
       
    }
    cout << s << endl;

    return 0;
}