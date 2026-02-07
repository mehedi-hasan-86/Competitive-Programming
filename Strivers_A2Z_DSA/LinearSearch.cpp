#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int linearSearch(vi &a, int x){
    int n = a.size();
    for(int i=0; i<n; i++){
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,x;
    cin >> n >> x;
    
    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int idx = linearSearch(a, x);
    cout << idx << endl;

    return 0;
}