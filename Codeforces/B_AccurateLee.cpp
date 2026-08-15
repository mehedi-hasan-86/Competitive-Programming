#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
#define endl '\n'
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e6;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int r = 0;
        for(int i=n-1; i>=0; i--){
            if(s[i]=='0'){
                r = i;
                break;
            }
        }
        string sr = "";
        for(int i=r; i<n; i++){
            sr +=s[i];
        }
        // cout<< sr << endl;

        int l = -1;
        for(int i=0; i<n;i++){
            if(s[i]=='0'){
                l=i;
            }else{
                break;
            }
        }
        if(r == l){
            l = l-1;
        }

        string ls = "";
        for(int i=0; i<=l; i++){
            ls +=s[i];
        }
        // cout << ls << endl;
        cout << ls + sr << endl;

    
       
    }
    

    return 0;
}