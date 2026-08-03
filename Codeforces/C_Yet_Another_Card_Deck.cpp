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

    int n,q;
    cin >> n >> q;

    // vector<pair<int,int>> v;
    vector<int> pos(51,0);

    for(int i=1; i<=n; i++){
        int c;
        cin >> c;
        if(pos[c]==0) pos[c] = i;
    }

    while(q--){
        int c;
        cin >> c;

        cout << pos[c] << " ";

        int cur = pos[c];
        for(int i=1; i<=50; i++){
            if(pos[i]<cur){
                pos[i]++;
            }
        }
        pos[c] =1;
    }
    cout << endl;

    return 0;
}