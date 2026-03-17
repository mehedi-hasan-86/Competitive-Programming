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
    int n = s.size();
    
    for(int i=0; i<n; i++){
        if(s[i]==s[i-1]){
            for(char c='a'; c<='z'; c++){
                if(c != s[i-1] && (i+1>=n || c !=s[i+1])){
                    s[i]=c;
                    break;
                }
            }
        }
    }
    cout << s << endl;

    return 0;
}