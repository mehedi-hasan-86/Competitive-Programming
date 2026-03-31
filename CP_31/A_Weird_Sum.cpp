#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;


//sum of absolute differences prefix sum contribution

lli calc(vi &a){
    sort(a.begin(), a.end());
    lli res= 0, pfx = 0;
    for(int i=0; i<a.size(); i++){
        res += (1LL)*i*a[i]-pfx;
        // for(int j=i+1; j<a.size(); j++){
        //   res +=abs(a[i]-a[j]);
        // }
        pfx +=a[i];
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n,m;
    cin >> n >> m;

    map<int,vector<pair<int,int>>>mp;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int x;
            cin >> x;
            mp[x].push_back({i,j});
        }
    }
    
    lli total = 0;
    for(auto &it : mp){
        vi r,c;

        for(auto &p : it.second){
            r.push_back(p.first);
            c.push_back(p.second);
        }
        total += calc(r);
        total +=calc(c);
    }
    cout << total << endl;

    return 0;
}