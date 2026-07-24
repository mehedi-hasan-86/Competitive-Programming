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
    cin >>t;

    while(t--){
        int n,m,l,r;
        cin >> n >> m >> l >> r;

        int lft = -l;
        int rgt = r;

        int rgt_usd = min(rgt, m);
        int lft_usd = m-rgt_usd;



        cout << -lft_usd << " " << rgt_usd << endl;


    }

    return 0;
}