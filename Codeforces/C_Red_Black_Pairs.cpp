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

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s1,s2;
        cin >> s1 >> s2;
        if(s1==s2){
            cout << 0 << endl;
            continue;
        }

        vi ss1, ss2;
        int cnt1 = 1;
        for(int i=0; i<n-1; i++){
            if(s1[i]==s1[i+1]){
                cnt1++;
            }else{
                if(cnt1>1) ss1.push_back(cnt1);
                cnt1 = 1;
            }   
        }
        if(cnt1>1) ss1.push_back(cnt1);

        int cnt2=1;
        for(int i=0; i<n-1; i++){
            if(s2[i]==s2[i+1]){
                cnt2++;
            }else{
                if(cnt2>1) ss2.push_back(cnt2);
                cnt2 = 1;
            }
            
        }
        if(cnt2>1) ss2.push_back(cnt2);


        if(ss1.size()==0 || ss2.size()==0){
            int ans = 0;
            for(int i=0; i<n; i++){
                if(s1[i] != s2[i]){
                    ans++;
                }
            }
            cout << ans << endl;
            continue;
        }

        // cout << endl;
        // for(auto x : ss1){
        //     cout << x << " ";
        // }
        // cout << endl;
        // for(auto y : ss2){
        //     cout << y << " ";
        // }
        // cout << endl;

        int cnt = 0;
        for(int i=0; i<n; i++){
            if(((s1[i] != s2[i]) && (s1[i] !=s2[i+1])) && (s2[i] !=s1[i+1])){
                cnt++;
            }
        }
        cout << cnt << endl;

        // for(int i=0; i<n; i++){
        //     if(s1[i]==s2[i+2] && s[])
        // }


        
        // cout << n << endl;
        // cout << s1 << endl << s2 << endl;
    
    }

    return 0;
}