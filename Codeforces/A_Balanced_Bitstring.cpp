#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<char> val(k,'?');
        bool isC  = true;

        for(int i=0; i<n; i++){
            if(s[i]=='?') continue;
            int group  = i%k;
            if(val[group]=='?'){
                val[group] = s[i];
            }else if(val[group] != s[i]){
                isC  = false;
                break;
            }
        }

        int zeros = 0, ones = 0;

        if(isC){
            for(int i=0; i<k; i++){
                if(val[i]=='0') zeros++;
                if(val[i]=='1') ones++;
            }
            if(zeros>k/2 || ones>k/2){
            isC = false;
            }
        
        }
        cout << (isC ? "YES":"NO") << endl;

    }

    return 0;
}