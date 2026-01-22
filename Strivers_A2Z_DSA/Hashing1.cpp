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

    int hash[26] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a']++;
    }
    

    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        cout << hash[c-'a'] << endl;
     }

    return 0;
}