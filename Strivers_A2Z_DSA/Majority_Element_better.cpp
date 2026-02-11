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

    unordered_map<int, int> freq;
    for(int i=0; i<n; i++){
        freq[a[i]]++;
    }

    for(auto it : freq){
        if(it.second > n/2 ){
            cout << it.first << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}