#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;

const lli MAX = 1e12+5;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vl facts;
    lli fact = 1;
    for(lli i=1; fact<=MAX; i++){
        facts.push_back(fact);
        fact *=(i+1);
    }

    int t;
    cin >> t;
    while(t--){
        lli val;
        cin >> val; 

        int min_k = INT_MAX;
        int fsize= facts.size();

        for(int msk = 0; msk<(1<<fsize); msk++){
            lli sumF = 0;
            int cntF = 0;
            for(int j=0; j<fsize; j++){
                if(msk &(1<<j)){
                    sumF +=facts[j];
                    cntF++;
                }
            }
            if(sumF> val) continue;
            lli rem = val-sumF;
            int cntP = __builtin_popcountll(rem);
            min_k = min(min_k, cntF+cntP);
        }
        if(min_k==INT_MAX) cout << -1 << endl;
        else cout << min_k << endl;
    }

    return 0;
}