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
        string s;
        cin >> s;

        int cnt1 = 0, cnt0 = 0;
        vi ans;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                cnt1++;
                // ans.push_back(i+1);
            }else{
                cnt0++;
            }
        }

        if(cnt0 == n){
            cout << 0 << endl;
            continue;
        }



        if(cnt1 %2 == 0){
            for(int i=0; i<n; i++){
                if(s[i] == '1') ans.push_back(i+1);
            }
        }else if(cnt0 % 2 == 1){
            for(int i=0; i<n; i++){
                if(s[i]=='0') ans.push_back(i+1);
            }
        }else{
            cout << - 1 << endl;
            continue;
        }

        cout << ans.size() << endl;
        for(int x : ans){
            cout << x << " ";
        }
        cout << endl;


        // if(cnt1%2 == 1 &){
        //     cout << -1 << endl;
        // }else if(cnt1==0){
        //     cout << 0 << endl;
        // }else{
        //     cout << cnt1 << endl;
        //     for(int x : ans){
        //         cout << x << " ";
        //     }
        //     cout << endl;
        // }
    }

    return 0;
}