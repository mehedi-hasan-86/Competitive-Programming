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
        int n;
        cin >> n;
        string s;
        cin >> s;

        string s25 = "2025";
        string s26 = "2026";

        bool is25 = false;
        bool is26 = false;

        if(s.find(s25) != string :: npos){
            is25 = true;
        }
        if(s.find(s26) != string :: npos){
            is26 = true;
        }

        if( (is25 && is26) || (!is25 && is26) || (!is25 && !is26)){
            cout << 0 << endl;
        }else{
            cout << 1 << endl;
        }


    }



    return 0;
}