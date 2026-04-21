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
        string s;
        cin >> s;

        vi res;
        int cnt = 1;
        for(int i=0; i<s.length()-1; i++){
            if(s[i]==s[i+1]){
                cnt++;
            }else{
                if(cnt > 1){
                 res.push_back(cnt);
                }
                cnt=1;
            }
        }
        if(cnt>1) res.push_back(cnt);
        sort(res.begin(), res.end());
        
        if(res.size()==0){
            cout <<"YES" << endl;
            continue;
        }
        if(res[res.size()-1]>3){
            cout <<"NO" << endl;
            continue;
        }
        int cnt2 = count(res.begin(), res.end(), 2);
        int cnt3 = count(res.begin(), res.end(), 3);

        if((cnt2<=2 && cnt3==0) || (cnt2==0 && cnt3==1)){
            cout <<"YES" << endl;
        }else{
            cout <<"NO" << endl;
        }
    }

    return 0;
}