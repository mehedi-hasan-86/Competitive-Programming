#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long s, m;
        cin >> s >> m;

        long long g = m & -m;
        if (s % g != 0){
            cout << -1 << '\n';
            continue;
        }

        long long ans = 0;
        while (s > 0){
            long long x = 0;
            for(int i = 0; i < 60; i++){
                if ((m & (1LL << i)) && (x + (1LL << i) <= s))
                    x += (1LL << i);
            }
            s -= x;
            ans++;
        }

        cout << ans << '\n';
    }
    return 0;
}