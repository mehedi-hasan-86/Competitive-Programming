#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

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

    int n,m;
    cin >> n >> m;

    lli total = 0;

    for(int i=0; i<n; i++){
        int g = gcd(i,n);
        total +=power(m,g);
    }
    lli dist = total/n;
    cout << dist << endl;




    return 0;
}