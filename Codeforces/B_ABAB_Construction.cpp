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

        bool isC = true;

        if(n%2==1){
            if(s[0]=='b'){
                isC = false;
            }

            for(int i=1; i<n-1; i+=2){
                if(s[i] != '?' && s[i+1] != '?' && s[i] == s[i+1]){
                    isC = false;
                }
            }
        }else{
                for(int i=0; i<n-1; i+=2){
                if(s[i] != '?' && s[i+1] != '?' && s[i] == s[i+1]){
                    isC = false;
                }
            }

        }
        cout << (isC ? "YES":"NO") << endl;
    }

    return 0;
}