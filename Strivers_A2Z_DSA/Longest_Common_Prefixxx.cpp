#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

string longestCommonPrefix(vector<string> &ss){
    if(ss.empty()) return "";

    sort(ss.begin(), ss.end());

    string fst = ss[0];
    string lst = ss[ss.size()-1];

    string ans = "";
    int minLen = min(fst.size(), lst.size());

    for(int i=0; i<minLen; i++){
        if(fst[i] != lst[i]) break;
        ans +=fst[i];
    }

    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<string> ss(n);

    for(int i=0; i<n; i++){
        cin >> ss[i];
    }
    cout << longestCommonPrefix(ss) << endl;

    return 0;
}