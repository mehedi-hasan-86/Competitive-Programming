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
    
    int cnt = 1;
    int mx = INT_MIN;
    for(int i=0; i<s.size()-1; i++){
        if(s[i]==s[i+1]){
          cnt++;
        }else{
          cnt = 1;
        }
        mx = max(mx, cnt); 
    }
    mx = max(mx, cnt);

    cout << mx << endl;

    // sort(s.begin(), s.end());
    // int cntA = count(s.begin(), s.end(),'A');
    // int cntC = count(s.begin(), s.end(),'C');
    // int cntG = count(s.begin(), s.end(),'G');
    // int cntT = count(s.begin(), s.end(),'T');

    // cout << max({cntA, cntC, cntG, cntT}) << endl;

    return 0;
}