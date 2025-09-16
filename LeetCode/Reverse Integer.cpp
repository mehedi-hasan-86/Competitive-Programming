#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long reverse(long long x) {
        long long m = (x < 0) ? -x : x;
        long long rev = 0;

        while (m) {
            rev = rev * 10 + m % 10;
            m /= 10;
        }

        if (x < 0) rev = -rev;
        if (rev < INT_MIN || rev > INT_MAX) return 0;
        return rev;
    }
};

int main() {
    long long n;
    cin >> n;

    Solution sol;
    cout << sol.reverse(n) << "\n";

    return 0;
}
