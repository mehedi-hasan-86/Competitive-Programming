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
        lli n,k;
        cin >> n >> k;

        if(n%2==0){
            cout << (k-1)%n + 1 << endl;
        }else{
            cout <<((k-1) + (k-1)/(n/2))%n+1 << endl;
        }
    }

    return 0;
}