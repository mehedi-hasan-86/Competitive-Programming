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

        if(n%2==1){
            cout << 0 << endl;
            continue;
        }

        // if(n%4==0){
        //     cout << n/4 << endl;
        // }else{
            cout << n/4 + 1 << endl;
        // }
    }

    return 0;
}