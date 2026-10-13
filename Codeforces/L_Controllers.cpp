#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int p = 0, m = 0;
    for(char c : s){
        if(c=='+') p++;
        else m++;
    }
    int q;
    cin >> q;

    while(q--){
        lli a,b;
        cin >> a >> b;

        if(a==b){
            cout << (p==m ? "YES":"NO") << endl;
            continue; 
        }
        lli d = abs(a-b);
        lli num = 1LL*(m-p)*min(a,b);

        if(num %d==0){
            lli k = num/d;
            if(k>=-m && k<=p){
                cout <<"YES" << endl;
            }else{
                cout <<"NO" << endl;
            }
        }else{
            cout <<"NO" << endl;
        }
    }

    return 0;
}