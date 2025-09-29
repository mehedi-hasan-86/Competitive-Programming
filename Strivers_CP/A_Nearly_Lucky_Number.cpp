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

    lli cnt7 = count(s.begin(), s.end(),'7');
    lli cnt4 = count(s.begin(), s.end(),'4');
    lli total_cnt = cnt7 + cnt4;

    if(total_cnt == 7 || total_cnt == 4){
        cout <<"YES" <<endl;
    }else{
        cout <<"NO" << endl;
    }

    return 0;
}