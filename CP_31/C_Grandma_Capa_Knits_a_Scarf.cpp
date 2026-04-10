#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

bool isPalindrome(const string &s){
    int l=0, r = s.size()-1;

    while(l<r){
        if(s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        if(isPalindrome(s)){
            cout << 0 << endl;
            continue;
        }
        int ans = INT_MAX;

        for(char ch = 'a'; ch <= 'z'; ch++){
            int l = 0, r = n-1;
            int del = 0;
            bool ok = true;

            while(l<r){
                if(s[l]==s[r]){
                    l++;
                    r--;
                }else{
                    if(s[l]==ch){
                        l++;
                        del++;
                    }else if(s[r]==ch){
                        r--;
                        del++;
                    }else{
                        ok = false;
                        break;
                    }
                }
            }
            if(ok){
                ans = min(ans, del);
            }
        }
        if(ans == INT_MAX) cout << -1 << endl;
        else cout << ans << endl;
    }

    return 0;
}