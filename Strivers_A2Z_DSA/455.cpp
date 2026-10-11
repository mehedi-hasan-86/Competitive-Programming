#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;

    vi g(n), s(m);
    for(int i=0; i<n; i++){
        cin >> g[i];
    }
    for(int i=0; i<m; i++){
        cin >> s[i];
    }

    sort(g.begin(), g.end());  
    sort(s.begin(), s.end());

    int i=0, j=0;
    while(i<n && j<m){
        if(s[j]>=g[i]){
            i++;
        }
        j++;
    }
    cout << i << endl;


    

    return 0;
}