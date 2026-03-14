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

    vi a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    vector<pair<int,int>> v;
    for(int i=0; i<n; i++){
        v.push_back({a[i],i});
    }
    sort(v.begin(), v.end());

    vi ans;

    auto last = v.back();

    lli sum = 0;
    for(int x=0; x<v.size()-1; x++){
    sum +=v[x].first;
    }
    lli sum_restore = sum;
    for(int i=0; i<n-1; i++){
        // lli sum =0;

        sum -=v[i].first;
        if(sum==last.first){
            ans.push_back(v[i].second +1);
        }
        sum = sum_restore;
    }
    lli total = 0;
    auto lst_second = v.end()-2;
    for(int i=0; i<v.size()-2; i++){
        total +=v[i].first;
    }
    if(total == lst_second->first){
        ans.push_back(last.second+1);
    }

    cout << ans.size() << endl;
    for(auto it : ans){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}