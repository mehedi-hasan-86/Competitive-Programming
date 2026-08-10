#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

        for (int i = 1; i <= n; i++) {
        // Code runs n times
        // Complexity: O(n)
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                // Code runs n × n = n² times
                // Complexity: O(n²)
            }
        }

        for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                // Code runs n × n × n = n³ times
                // Complexity: O(n³)
            }
        }
       }

       for (int i = 1; i <= 3 * n; i++) {
    // Code runs 3n times
    // Complexity: O(n)  (constant factor ignored)
    }
    
    for (int i = 1; i <= n + 5; i++) {
    // Code runs n+5 times
    // Complexity: O(n)  (constant ignored)
    }

    for (int i = 1; i <= n; i += 2) {
    // Code runs n/2 times
    // Complexity: O(n)  (constant factor ignored)
    }

    for (int i = 1; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {
        // Code runs (n-1) + (n-2) + ... + 1 = n(n-1)/2 times
        // Complexity: O(n²)
    }
    }

        // Phase 1: O(n)
    for (int i = 1; i <= n; i++) {
        // code
    }

    // Phase 2: O(n²)  ← SLOWEST
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // code
        }
    }

    // Phase 3: O(n)
    for (int i = 1; i <= n; i++) {
        // code
    }
    // Total Complexity = O(n²)  (take the SLOWEST)

    int m;
    cin >> m;

    for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
        // Code runs n × m times
        // Complexity: O(nm)
    }
   }

    

    return 0;
}