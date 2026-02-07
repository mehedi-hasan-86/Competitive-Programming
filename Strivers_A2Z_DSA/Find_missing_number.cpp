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
    int val = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        val ^= a[i];
    }
    for(int i=1; i<=n+1; i++){
        val ^=i;
    }
    cout << val << endl;



    return 0;
}