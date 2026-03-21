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
    int mx_cnt  = 1;
    for(int i=0; i<s.size(); i++){
        if(s[i]==s[i+1]){
            cnt++;
        }else {
            cnt = 1;
        }
        mx_cnt = max(mx_cnt, cnt);
    }
    cout << mx_cnt <<endl;

    return 0;
}