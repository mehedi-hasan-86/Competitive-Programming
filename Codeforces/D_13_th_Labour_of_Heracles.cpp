#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vl w(n);
        lli sum  = 0;
        for(int i=0; i<n; i++){
            cin >> w[i];
            sum +=w[i];
        }
        vi degree(n,0);
        for(int i=0; i<n-1; i++){
            int u,v;
            cin >> u >> v;
            v--;
            u--;
            degree[v]++;
            degree[u]++;
        }
        vl extra;
        for(int i=0; i<n; i++){
            for(int j=1; j<degree[i]; j++){
                extra.push_back(w[i]);
            }
        }
        sort(extra.rbegin(), extra.rend());
        cout << sum;
        for(int i=0; i<n-2; i++){
            sum +=extra[i];
            cout << " " << sum;
        }
        cout <<endl;
    }

    

    return 0;
}