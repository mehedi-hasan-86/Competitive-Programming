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

    map<char, int> cnt;
    for(auto c : s){
        cnt[c]++;
    }
    int odds = 0;
    char center;
    for(char c = 'A'; c<='Z'; c++){
        if(cnt[c]%2==1){
            odds++;
            center = c;
        }
    }
    if(odds>1){
        cout <<"NO SOLUTION" << endl;
    }else{
        for(char c = 'A'; c<='Z'; c++){
            cout << string(cnt[c] /2,c);
        }
        if(odds){
            cout << center;
        }
        for(char c = 'Z'; c>='A'; c--){
            cout << string(cnt[c] /2,c);
        }
        cout << endl;

    }

    return 0;
}