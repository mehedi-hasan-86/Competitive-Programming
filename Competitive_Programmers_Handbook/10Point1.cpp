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

    int x = -43;
    unsigned int y  = x;
    cout << x << endl;
    cout << y << endl;
    cout << ((1ULL<<32) - 43) << endl;

    int m = 2147483647;
    cout << m << endl;
    cout << (++m) << endl;

    return 0;
}