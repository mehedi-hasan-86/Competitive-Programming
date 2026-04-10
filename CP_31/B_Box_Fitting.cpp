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
        int n;
        lli w;
        cin >> n >> w;

        vi cnt(21,0);
        for(int i=0; i<n; i++){
            lli w;
            cin >> w;
            int p = log2(w);
            cnt[p]++;
        }
        int h =0;
        while(true){
            lli space = w;
            bool used = false;
            for(int i=20; i>=0; i--){
                while(cnt[i]&&(1LL<<i)<=space){
                    space -=(1LL<<i);
                    cnt[i]--;
                    used = true;
                }
            }
            if(!used) break;
            h++;
        }
        cout << h << endl;
    }

    return 0;
}