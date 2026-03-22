#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

vector<string> create(int n){
    if(n==1){
        return {"0", "1"};
    }
    vector<string> code;
    auto prev = create(n-1);
    for(auto s : prev){
        code.push_back("0"+s);
    }
    reverse(prev.begin(), prev.end());
    for(auto s : prev){
        code.push_back("1"+s);
    }
    return code;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    auto ans = create(n);
    for(auto s : ans){
        cout << s << endl;
    }

    return 0;
}