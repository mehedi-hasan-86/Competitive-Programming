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
        lli n;
        cin >> n;

        lli k = 1;

        lli tmp = n;
        for(lli i=2; i*i<=tmp; i++){
            if(tmp%i==0){
                k *=i;
                while(tmp %i==0){
                    tmp /=i;
                }
            }
        }
        if(tmp>1){
            k *=tmp;
        }
        cout << k << endl;

    }

    return 0;
}