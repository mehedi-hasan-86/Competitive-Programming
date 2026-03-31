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

    int n,m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));
    // vector<tuple<int,int,int>> a;
    map<int,vector<pair<int,int>>> mp;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> v[i][j];
            mp[v[i][j]].push_back({i+1,j+1});
            // a.push_back({v[i][j], i+1, j+1});
        }
    }

    lli total = 0;
    for(auto it = mp.begin();it != mp.end(); it++){
        vector<pair<int,int>> pts = it->second;
        int sz = pts.size();

        lli sum = 0;

        for(int i=0; i<sz; i++){
            for(int j=i+1; j<sz; j++){
                sum +=abs(pts[i].first - pts[j].first) + abs(pts[i].second - pts[j].second);
            }
        }
        total +=sum;

    }
    cout << total << endl;

    // for(auto x: a){
    // cout << get<0>(x) << " at (" << get<1>(x) << "," << get<2>(x) << ")" << endl;
    // }

    // lli total = 0;
    // for(auto it = mp.begin(), it != mp.end)





    return 0;
}