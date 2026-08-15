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

bool solve(int x, vi &v){
    int cnt2 = 0, cnt6 = 0;
    for(int x : v){
        if(x==2) cnt2++;
        else cnt6++;
    }

    for(int i=0; i<=cnt2; i++){
        for(int j=0; j<=cnt6; j++){
            int sum = (x+i*2+j*6);
            if(sum%9==0){
                return true;
            }
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    while(t--){
        string s;
        cin >> s;

        int sum = 0;
        vi fs ;
        for(int i=0;i<s.size(); i++){
            sum = (sum + s[i]-'0')%9;
            if(s[i]=='2'){
                fs.push_back(2);
            }
            if(s[i]=='3'){
               fs.push_back(6); 
            }
        }

        if(sum==0){
            cout << "YES" << endl;
            continue;
        }

        // cout << sum << endl;
        // for(auto x : fs){
        //     cout << x <<  " ";
        // }
        // cout << endl;

        if(solve(sum,fs)){
            cout <<"YES"  << endl;
        }else{
            cout <<"NO" << endl;
        }
    }

    return 0;
}