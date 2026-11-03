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

        vector<string> ss;
        for(int i=0; i<n; i+=k){
            string  p = s.substr(i,k);
            ss.push_back(p);
        }
        // for(auto x : ss){
        //     cout << x << " ";
        // }
        // cout << endl;

        int ans =  0;
        int blocks = n/k;

        for(int j=0; j<k/2; j++){
            int freq[26] = {0};

            for(int i=0; i<blocks; i++){
                freq[ss[i][j]-'a']++;
                freq[ss[i][k-1-j]-'a']++;
            }

            int mx = 0;
            for(int x=0; x<26; x++){
                mx = max(mx,freq[x]);
            }
            ans += 2*blocks-mx;
        }
        if(k%2==1){
            int freq[26] = {0};
            for(int i=0; i<blocks; i++){
                freq[ss[i][k/2]-'a']++;
            }
            int mx = 0;

            for(int x = 0; x<26; x++){
                mx = max(mx, freq[x]);
            }
            ans +=blocks - mx;
        }
        cout << ans << endl;



    }

    return 0;
}