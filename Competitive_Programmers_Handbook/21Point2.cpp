#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

lli modpow(lli x, lli n, lli m){
    if(n == 0) return 1%m;
    lli u = modpow(x,n/2, m);
    u = (u*u)%m;

    if(n%2==1) u = (u*x)%m;
    return u;
}

lli modInverse(lli x, lli m){
    return modpow(x, m-2, m);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cout << "=== Modular Arithmetic Examples ===\n";

    int m = 17;
    int x = 75;
    cout << "75 mod 17 = " << x % m << "\n\n";

    cout << "(a + b) mod m example:\n";
    int a = 20, b = 15;
    cout << "(20 + 15) mod 17 = " << (a + b) % m << "\n\n";

    cout << "(a - b) mod m example:\n";
    cout << "(20 - 15) mod 17 = " << (a - b + m) % m << "\n\n";

    cout << "(a * b) mod m example:\n";
    cout << "(20 * 15) mod 17 = " << (a * b) % m << "\n\n";

    cout << "Power modulo example:\n";
    cout << "5^13 mod 17 = " << modpow(5, 13, 17) << "\n\n";

    cout << "=== Fermat's Theorem Example ===\n";
    cout << "6^(17-1) mod 17 = " << modpow(6, 16, 17) << "\n\n";

    cout << "=== Modular Inverse Example ===\n";
    int num = 6;
    long long inv = modInverse(num, m);
    cout << "Inverse of 6 mod 17 = " << inv << "\n";
    cout << "6 * inverse mod 17 = " << (num * inv) % m << "\n\n";

    cout << "=== Division using Modular Inverse ===\n";
    cout << "36 / 6 mod 17 = ";
    cout << (36 % 17 * inv) % 17 << "\n\n";

    cout << "=== Unsigned Integer Overflow Example ===\n";
    unsigned int y = 123456789;
    cout << "Unsigned overflow result: " << y * y << "\n";

    return 0;
}