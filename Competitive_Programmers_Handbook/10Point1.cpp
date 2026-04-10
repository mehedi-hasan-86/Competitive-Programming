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
    cout << x << endl; //-43
    cout << y << endl; //4294967253
    cout << ((1ULL<<32) - 43) << endl; //4294967253

    int m = 2147483647;
    cout << m << endl; // 2147483647
    cout << (++m) << endl; //-2147483648

    return 0;
}