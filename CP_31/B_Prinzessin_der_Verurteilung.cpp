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

        bool found = false;
        for(char c = 'a' ; c<='z'; c++){
            string t(1,c);
            if(s.find(t)==string::npos){
                cout << t << endl;
                found  = true;
                break;
            }
        }
        if(found) continue;

    for(char c1 = 'a'; c1<='z'; c1++){
       for(char c2 = 'a'; c2<='z'; c2++){
        string t = "";
        t +=c1;
        t +=c2;

        if(s.find(t) == string::npos){
            cout << t << endl;
            found = true;
            break;
        }
       }
       if(found) break;
        }
    }

    return 0;
}