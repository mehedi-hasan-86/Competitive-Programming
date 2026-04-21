#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

bool isPalindrome(string s){
    int l = 0, r = s.length()-1;

    while(l<r){
        if(s[l]!=s[r]) return false;
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

        if(n%2==1){
            cout <<"NO" << endl;
            continue;
        }
        if(isPalindrome(s)){
            cout <<"YES" << endl;
            continue;
        }

        int cnt = 1;
        vi res;
        for(int i=0; i<n-1; i++){
             if(s[i]==s[i+1]) cnt++;
             else{
                res.push_back(cnt);
                cnt=1; 
             }
        }
        res.push_back(cnt);

        // for(auto x : res){
        //     cout << x << " ";
        // }
        // cout << endl;

        int idx = 0;
        string ss = "";
        for(int i=0; i<res.size(); i++){
            idx +=res[i];
            if(res[i]%2==1){
                ss += s[idx-1];
            }
        }
        // cout << ss << endl;

        bool isC = false;
        for(int i=0; i<ss.size(); i+=2){
            if(ss[i] !=ss[i+1]){
                isC = true;
            }
    }
        if(isC) cout << "NO" << endl;
        else cout <<"YES" << endl;




    }

    return 0;
}