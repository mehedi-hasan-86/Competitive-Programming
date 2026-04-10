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
        map<int,int> cnt;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int x;cin >> x; cnt[x]++;
            }
        }
        bool isC = true;
        for(auto it : cnt){
            if(it.second >n*(n-1)){
              isC = false; 
              break;
            }

        }

        if(isC) cout <<"YES" << endl;
        else cout <<"NO"<< endl;

    }

    return 0;
}