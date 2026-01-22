#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int f(int n){
    if(n<=1) return n;
    return f(n-1)+f(n-2);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n;
    cin >> n;
    cout << f(n) << endl;


    return 0;
}