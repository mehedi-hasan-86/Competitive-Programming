#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MOD = 998244353;

lli fact(int x){
    lli res = 1;
    for(int i=1; i<=x; i++){
        res = (res*i) %MOD;
    }
    return res;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        vi res;
        int cnt = 1;
        for(int i=1; i<s.size(); i++){
            if(s[i]==s[i-1]){
                cnt++;
            }else{
            if(cnt>1){
            res.push_back(cnt);
            }
            cnt = 1;
            }
        }
        if(cnt>1) res.push_back(cnt);

        if(res.size()==0){
            cout << 0 << " " << 1 << endl; 
            continue;
        }

        long long ways = 1;
        int  oper = 0;

        for(int x : res){
           ways =  (ways*x)%MOD;
           oper += (x-1);

        }
        ways  = (ways*fact(oper))%MOD;
        cout << oper <<" " <<  ways << endl;
    }

    return 0;
}