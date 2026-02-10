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
    cin >> n >>s;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    unordered_map<int,int> mp;

    for(int i=0; i<n; i++){
        int need = s - a[i];

        if(mp.find(need) != mp.end()){
            cout << mp[need] << " " << i << endl;
            return 0;
        }

        mp[a[i]] = i;
    }

    return 0;
}