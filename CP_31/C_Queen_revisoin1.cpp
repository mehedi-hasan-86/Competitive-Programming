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
    cin >>  n;

    vi p(n+1), c(n+1);
    vector<bool> canDelete(n+1, true);
    
    int root = -1;
    for(int i=1; i<=n; i++){
        cin >> p[i] >> c[i];
        if(p[i]==-1){
            root = i;
            continue;
        }
    }
    for(int i=1; i<=n; i++){
        if(p[i]==-1) continue;

        if(c[i]==0){
            canDelete[p[i]]= false;
        }
    }
    vi ans;
    for(int i=1; i<=n; i++){
        if(i==root) continue;
        if(c[i]==1 && canDelete[i]){
            ans.push_back(i);
        }
    }

    if(ans.empty()){
        cout << -1 << endl;
    }else{
        sort(ans.begin(), ans.end());
        for(int x : ans) cout << x << " ";
        cout << endl;
    }
    return 0;
}