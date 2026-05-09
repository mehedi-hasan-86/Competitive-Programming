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
        int x,y;
        cin >> x >> y;

        if(x%2 != 0 && y%2 != 0){
            cout <<"NO" << endl;
        }else{
            cout<<"YES" << endl;
        }
    }

    return 0;
}