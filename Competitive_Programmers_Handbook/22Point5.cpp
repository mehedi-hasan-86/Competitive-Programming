#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

lli power(lli a, lli b){
    lli res = 1;
    
    while(b){
        if(b%2) res *=a;
        a *=a;
        b /=2;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    if(n<1){
       cout << 0 << endl;
       return 0;
    }
    lli totalTrees = power(n,n-2);
    cout << totalTrees << endl;

    return 0;
}