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

    sort(s.begin(), s.end());
    cout << s << endl;

    // vi res;
    // int cnt = 1;
    // for(int i=0; i<s.length()-1; i++){
    //     if(s[i]==s[i+1]){
    //         cnt++;
    //     }else{
    //         res.push_back(cnt);
    //         cnt = 1;
    //     }
    // }
    // res.push_back(cnt);

    // int x = *max_element(res.begin(), res.end());

    // cout << (s.length()-x) << endl;



    // for(auto x : res){
    //     cout << x << " ";
    // }
    // cout << endl;

   }


    return 0;
}