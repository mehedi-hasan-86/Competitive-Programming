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

    lli n;
    cin >> n;
    if(n==1){
        cout << 1 << endl;
        return 0;
    }

    if(n==2 || n==3){
        cout <<"NO SOLUTION" << endl;
        return 0;
    }

    for(int i=n/2; i>=1; i--){
        cout << i << " " << i +n/2 << endl;
    }

    if(n%2==1) cout << n << " ";
    cout << endl;

    return 0;
}