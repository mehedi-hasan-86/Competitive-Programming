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

    int n,m;
    cin >> n >> m;

    vi a(n-1), b(n);
    for(int i=0; i<n-1; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];
    a.push_back(m);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ax = 0, bx =0;
    int cnt =0;
    for(int i=0; i<n; i++){
        if(a[ax]<b[bx]){
            ax++; bx++;
        }else{
            bx++;
            cnt++;
        }
    }
    cout << cnt << endl;

}

    return 0;
}