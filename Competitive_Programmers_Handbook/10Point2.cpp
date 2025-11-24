#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void printBits(int x) {
    for (int i = 31; i >= 0; i--) {
        cout << ( (x & (1 << i)) ? '1' : '0' );
    }
    cout << "\n";
}

int main() {
    int x = 5328;  

    cout << "Number x = " << x << "\n";
    cout << "Binary of x: ";
    printBits(x);

    cout << "\n===== Bit Access =====\n";
    for (int k = 0; k < 10; k++) {
        cout << "Bit " << k << " = " << ((x & (1 << k)) ? 1 : 0) << "\n";
    }

    cout << "\n===== Set Bit (k=3) =====\n";
    int setBit = x | (1 << 3);
    printBits(setBit);

    cout << "\n===== Clear Bit (k=4) =====\n";
    int clearBit = x & ~(1 << 4);
    printBits(clearBit);

    cout << "\n===== Toggle Bit (k=5) =====\n";
    int toggleBit = x ^ (1 << 5);
    printBits(toggleBit);

    cout << "\n===== x & (x-1) : Remove last 1 bit =====\n";
    int r1 = x & (x - 1);
    printBits(r1);

    cout << "\n===== x & -x : Keep only last 1 bit =====\n";
    int r2 = x & -x;
    printBits(r2);

    cout << "\n===== x | (x-1) : Make all bits after last 1 = 1 =====\n";
    int r3 = x | (x - 1);
    printBits(r3);

    cout << "\n===== Power of Two Check =====\n";
    cout << "Is x power of two? " 
         << ( (x > 0 && (x & (x-1)) == 0) ? "YES" : "NO" ) << "\n";

    cout << "\n===== GCC Built-in Functions =====\n";
    cout << "__builtin_clz(x)      = " << __builtin_clz(x) << "\n";
    cout << "__builtin_ctz(x)      = " << __builtin_ctz(x) << "\n";
    cout << "__builtin_popcount(x) = " << __builtin_popcount(x) << "\n";
    cout << "__builtin_parity(x)   = " << __builtin_parity(x) << "\n";

    cout << "\n===== 64-bit Versions =====\n";
    long long y = 1LL << 40;

    cout << "y = 1LL << 40 = " << y << "\n";
    cout << "__builtin_clzll(y) = " << __builtin_clzll(y) << "\n";
    cout << "__builtin_ctzll(y) = " << __builtin_ctzll(y) << "\n";
    cout << "__builtin_popcountll(y) = " << __builtin_popcountll(y) << "\n";
    cout << "__builtin_parityll(y) = " << __builtin_parityll(y) << "\n";

    return 0;
}