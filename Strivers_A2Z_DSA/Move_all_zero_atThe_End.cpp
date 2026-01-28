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
    vi temp;
    for(int i=0; i<n; i++){
        if(a[i] != 0){
            temp.push_back(a[i]);
        }
    }
    int nz = temp.size();
    for(int i=0; i<nz; i++){
        a[i] = temp[i];
    }
    for(int i = nz; i<n; i++){
        a[i] = 0;
    }
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }

    return 0;
}