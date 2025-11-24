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

    vi length(n,1);
    for(int k=0; k<n; k++){
        for(int i=0; i<k; i++){
            if(a[i]<a[k]){
                length[k] = max(length[k], length[i]+1);
            }
        }
    }
    int res = *max_element(length.begin(), length.end());
    cout << res << endl;
    return 0;
}