#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int solve(lli n){
    if(n==0) return 0;
    return n/5 + solve(n/5);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    lli n;
    cin >> n;

    cout << solve(n) << endl;

    return 0;
}