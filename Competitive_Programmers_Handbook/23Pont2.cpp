#include<bits/stdc++.h>
using namespace std;

#define lli long long
const lli MOD = 1e9+7;

//----------------------------------------
// Matrix structure
//----------------------------------------
struct Matrix {
    int sz;
    vector<vector<lli>> m;

    Matrix(int n, bool ident = false) {
        sz = n;
        m.assign(n, vector<lli>(n, 0));
        if (ident) {
            for (int i = 0; i < n; i++)
                m[i][i] = 1;
        }
    }
};

//----------------------------------------
// Matrix multiplication
//----------------------------------------
Matrix multiply(const Matrix &A, const Matrix &B) {
    int n = A.sz;
    Matrix C(n);

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n; k++) {
            if (A.m[i][k] == 0) continue;
            for (int j = 0; j < n; j++) {
                C.m[i][j] = (C.m[i][j] + A.m[i][k] * B.m[k][j]) % MOD;
            }
        }
    }
    return C;
}

//----------------------------------------
// Matrix exponentiation
//----------------------------------------
Matrix power(Matrix base, lli exp) {
    int n = base.sz;
    Matrix res(n, true);

    while (exp) {
        if (exp & 1) res = multiply(res, base);
        base = multiply(base, base);
        exp >>= 1;
    }
    return res;
}

//----------------------------------------
// Linear Recurrence Solver
//----------------------------------------
lli linearRecurrence(
    vector<lli> &init,
    vector<lli> &coeff,
    lli n
) {
    int k = coeff.size();

    if (n < k) return init[n];

    Matrix X(k);

    // shifting rows
    for (int i = 0; i < k-1; i++)
        X.m[i][i+1] = 1;

    // last row = coefficients
    for (int i = 0; i < k; i++)
        X.m[k-1][i] = coeff[k-1-i];

    Matrix Xn = power(X, n);

    lli res = 0;
    for (int i = 0; i < k; i++)
        res = (res + Xn.m[0][i] * init[i]) % MOD;

    return res;
}

//----------------------------------------
// MAIN
//----------------------------------------
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    lli n;
    cin >> k >> n;

    vector<lli> init(k), coeff(k);

    for (int i = 0; i < k; i++)
        cin >> init[i];

    for (int i = 0; i < k; i++)
        cin >> coeff[i];

    cout << linearRecurrence(init, coeff, n) << "\n";

    return 0;
}
