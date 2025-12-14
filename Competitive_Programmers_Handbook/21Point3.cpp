#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define lli long long int
#define endl "\n"

// Extended Euclidean Algorithm
int extendGCD(int a, int b, int &x, int &y){
    if(b == 0){
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int g = extendGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

// Solve ax - by = c
bool solveDiophantine(int a, int b, int c, int &x0, int &y0){
    int g = extendGCD(a, b, x0, y0);
    if(c % g != 0) return false;
    x0 *= (c / g);
    y0 *= (c / g);
    return true;
}

// Modular Inverse
int modInverse(int a, int m){
    int x, y;
    int g = extendGCD(a, m, x, y);
    if(g != 1) return -1;
    return (x % m + m) % m;
}

// Chinese Remainder Theorem
int chineseRemainder(vector<int> a, vector<int> m){
    int n = a.size();
    int M = 1;
    for(int i = 0; i < n; i++) M *= m[i];

    int x = 0;
    for(int i = 0; i < n; i++){
        int Mi = M / m[i];
        int yi = modInverse(Mi, m[i]);
        x = (x + (lli)a[i] * Mi * yi) % M;
    }
    return (x + M) % M;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Diophantine Example
    int a = 39, b = 15, c = 12;
    int x0, y0;

    if(solveDiophantine(a, b, c, x0, y0)){
        cout << "Diophantine solution: x = " << x0 << ", y = " << y0 << endl;
        cout << "General solution:\n";
        cout << "x = " << x0 << " + 5k, y = " << y0 << " + 13k\n";
    }else{
        cout << "No solution exists." << endl;
    }

    // CRT Example
    vector<int> a_crt = {3, 4, 2};
    vector<int> m_crt = {5, 7, 3};
    int x = chineseRemainder(a_crt, m_crt);
    cout << "CRT solution x = " << x << endl;

    return 0;
}
