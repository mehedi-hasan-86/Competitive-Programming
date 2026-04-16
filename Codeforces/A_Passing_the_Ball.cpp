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
        int n; cin >> n;
        
        string s; cin >> s;
        for(int i=0; i<n;i++){
            if(s[i]=='L'){
                cout << i+1 << endl;
                break;
            }
        }
    }

    return 0;
}