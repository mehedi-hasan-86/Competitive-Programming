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

    int a[n+1];
    int b[n+1];
    for(int i=1; i<=n; i++){
        cin >> a[i];
        b[a[i]] = i;
    }
    for(int i=1; i<=n; i++){
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}