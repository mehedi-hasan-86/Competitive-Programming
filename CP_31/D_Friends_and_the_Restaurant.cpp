#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void solve(){
    int n;
    cin >> n;

    vl x(n),y(n);
    for(int i=0; i<n;i++) cin >> x[i];
    for(int i=0; i<n; i++) cin >> y[i];

    vl diff;
    for(int i=0; i<n; i++){
        diff.push_back(y[i]-x[i]);
    }
    sort(diff.begin(), diff.end());
    
    int l=0, r= n-1;
    int cnt = 0;
    while(l<r){
        if(diff[l]+diff[r]>=0){
          cnt++;
          l++;
          r--;
        }else{
            l++;
        }
    }

    cout << cnt << endl;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}