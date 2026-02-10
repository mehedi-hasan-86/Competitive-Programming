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

    int n,s;
    cin >> n >> s;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) continue;
            if(a[i]+a[j]==s){
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    cout << "Not found" << endl;

    return 0;
}