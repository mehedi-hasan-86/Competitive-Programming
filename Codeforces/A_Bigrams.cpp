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

    int t;
    cin >> t;

    while(t--){
        int k;
        cin >> k;

        int mx = 0, cnt2 = 0;
        for(int i=0; i<k; i++){
            int x;
            cin >> x;
            mx = max(mx,x);
            if(x==2) cnt2++;
        }
        cout << (mx>2 ||  cnt2>1 ? "YES":"NO") << endl;
    }

    return 0;
}