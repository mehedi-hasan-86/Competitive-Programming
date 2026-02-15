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

        vl a(n+1), b(n+1);
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        for(int i=1; i<=n; i++){
            cin >> b[i];
        }

        vl res;
        for(int i=1; i<=n; i++){
            res.push_back(a[i]-b[i]);
        }

        // for(auto i : res){
        //     cout << i << " ";
        // }
        // cout << endl;

        // for(int x : res){
        //     cout << x << " ";
        // }
        multimap<lli,int> v;
        for(int i=0; i<res.size(); i++){
            v.insert({res[i],i+1});
        }

        // for(auto x : v){
        //     cout << x.first << " " << x.second << endl;
        // }
        // cout << endl;

        vl ans;
        auto it =  v.rbegin();
        // cout << (*it).first << endl;

        for(auto i : v){
            if((*it).first == i.first){
                ans.push_back(i.second);
            }
        }

        sort(ans.begin(), ans.end());
        cout << ans.size() << endl;
        for(lli x : ans){
            cout << x << " ";
        }
        cout << endl;










    }

    return 0;
}