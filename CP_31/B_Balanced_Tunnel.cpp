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

    vi a(n), b(n);
    vi pos(n+1);

    for(int i=0; i<n; i++) cin >> a[i];

    for(int i=0; i<n; i++){
        cin >> b[i];
        pos[b[i]] = i;
    }

    int mx = -1;
    int fine =0;
    for(int i=0; i<n; i++){
        int exP = pos[a[i]];
        if(exP<mx){
            fine++;
        }
        mx = max(mx, exP);
    }
    cout << fine << endl;

    return 0;
}