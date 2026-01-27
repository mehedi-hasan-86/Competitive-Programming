#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int remove_duplicates(vi &a){
    int n = a.size();
    int k = 1;
    for(int i=1; i<n; i++){
        if(a[i] != a[i-1]){
            a[k] = a[i];
            k++;
        }
    }
    return k;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    cout << remove_duplicates(a) << endl;

    return 0;
}