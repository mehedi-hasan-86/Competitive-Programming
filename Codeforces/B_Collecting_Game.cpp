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

    vector<pair<lli, int>> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());

    vl pref(n);
    pref[0] = a[0].first;
    for(int i=1; i<n; i++){
        pref[i] = pref[i-1] + a[i].first;
    }

    vl ans(n);
    ans[n-1] = n-1;
    for(int i=n-2; i>=0; i--){
        if(pref[i]>=a[i+1].first){
            ans[i] = ans[i+1];
        }else{
            ans[i] = i;
        }
    }

    vl res(n);
    for(int i=0; i<n; i++){
        res[a[i].second] = ans[i];
    }

    for(int i=0; i<n; i++){
        cout << res[i] << " ";
    }
    cout << endl;



    }



    return 0;
}