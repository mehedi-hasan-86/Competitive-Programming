#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        long long s, m;
        cin >> s >> m;

        if ((s & m) != s) {
            cout << -1 << "\n";
        } else {
            cout << __builtin_popcountll(s) << "\n";
        }
    }
}