#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const int MOD = 1000000007;
long long factorial_mod(int n){
        long long result = 1;
        for (int i = 2; i <= n; i++) {
            result = (result * i) % MOD;
        }
        return result;
}

int mod_positive(int a, int m) {
    int result = a % m;
    if (result < 0) result += m;
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // 32-bit integer
    // int a = 123456789;

    // // 64-bit integer
    // long long b = 123456789123456789LL;
    cout << factorial_mod(4) << endl;

    cout << mod_positive(-7,3) << endl;
    double xx = 0.3 + 0.1;
    printf("%.20f\n", xx);

    /*
    Some numbers can't be represented exactly in binary!
    0.3 and 0.1 have rounding errors
    Their sum has accumulated error
    */

    /*
    // 
        WRONG - Don't do this:
        if (a == b) {
            // This may fail due to precision errors
        }

        //  CORRECT - Compare with tolerance:
        const double EPS = 1e-9;
        if (abs(a - b) < EPS) {
            // a and b are equal within tolerance
        }
    */

    double a = 0.3 + 0.1;
    double b = 0.4;

    if (abs(a - b) < 1e-9) {
        cout << "Equal!\n";  //  This will print
    }double x = 3.141592653589793;

    // Using printf
    printf("%.9f\n", x);  // 3.141592654

    // Using cout
    cout << fixed << setprecision(9) << x << "\n";
    // 3.141592654






    return 0;
}