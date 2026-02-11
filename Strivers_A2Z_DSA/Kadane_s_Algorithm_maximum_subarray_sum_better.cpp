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
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int mx = INT_MIN;
    for(int i =0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum +=a[j];
            mx = max(sum, mx);
        }
    }
    cout << mx << endl;

    return 0;
}