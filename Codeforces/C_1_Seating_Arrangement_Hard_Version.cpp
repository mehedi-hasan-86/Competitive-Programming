#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

lli x,s;

lli calc(const string &str, int iA){
    lli oT = 0;
    lli sd = 0;

    for(char c : str){
        if(c == 'I'){
            if(oT < x){
                oT++;
                sd++;
            }
        }else if(c=='E'){
            if(sd < oT*s){
                sd++;
            }
        }else{
            if(iA > 0){
                iA--;

                if(oT<x){
                    oT++;
                    sd++;
                }
            }else{
                if(sd < oT*s){
                    sd++;
                }
            }
        }
    }
    return sd;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n  >> x >> s;

        string str;
        cin >> str;

        int tA = 0;
        for(char c : str){
            if(c=='A') tA++;
        }
        lli ans = 0;

        for(int k=0; k<=tA; k++){
            ans = max(ans, calc(str,k));
        }
        cout << ans << endl;
    }

    return 0;
}