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

    sort(s.begin(), s.end());
    vector<string> res;
    
    do{
        res.push_back(s);
    }while(next_permutation(s.begin(), s.end()));

    cout << res.size() << endl;
    for(auto s : res){
        cout << s << endl;
    }

    return 0;
}