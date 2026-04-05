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

    int n;
    cin >> n;

    vl b(n);
    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    unordered_map<lli, lli>mp;
    for(int i=0; i<n; i++){
        lli idx = (i+1)-b[i];
        mp[idx] +=b[i];
    }
    lli ans = 0;
    for(auto &it:mp){
        ans = max(ans,it.second);
    }
    cout << ans << endl;

    return 0;
}