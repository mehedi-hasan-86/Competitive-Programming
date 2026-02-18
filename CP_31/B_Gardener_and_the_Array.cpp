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
        cin >> n;

        vector<vi> bits(n);
        unordered_map<int,int> freq;

        for(int i=0; i<n; i++){
            int k;
            cin >> k;

            bits[i].resize(k);
            for(int j=0; j<k; j++){
                cin >> bits[i][j];
                freq[bits[i][j]]++;
            }
        }

        bool isC = false;
        for(int i=0; i<n; i++){
            bool alGe2 = true;

            for(int bit : bits[i]){
                if(freq[bit]<2){
                    alGe2 = false;
                    break;
                }
            }
            if(alGe2){
                isC = true;
                break;
            }
        }
        if(isC) cout <<"YES" << endl;
        else cout <<"NO" << endl;
    }

    return 0;
}