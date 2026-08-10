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

    set<int> s;

    // Insert
    s.insert(3);
    s.insert(2);
    s.insert(5);

    // Count (0 or 1 for set)
    cout << s.count(3) << "\n";  // 1
    cout << s.count(4) << "\n";  // 0

    // Erase
    s.erase(3);
    s.insert(4);

    cout << s.count(3) << "\n";  // 0
    cout << s.count(4) << "\n";  // 1
    s.insert(5);
    s.insert(5);
    s.insert(5);

    cout << s.count(5) << "\n";  // 1 (not 4!)
    cout << s.size() << "\n";    // 1

    // Iterate (automatically sorted!)
    for (auto x : s) {
        cout << x << " ";
    }
    // Output: 2 5 6 8

    // Using iterator
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    // Output: 2 5 6 8


    multiset<int> s1;

    // Insert duplicates
    s1.insert(5);
    s1.insert(5);
    s1.insert(5);

    cout << s1.count(5) << "\n";  // 3

    // Remove ALL instances
    s1.erase(5);
    cout << s1.count(5) << "\n";  // 0

    // Remove ONE instance
    s1.insert(5);
    s1.insert(5);
    s1.erase(s1.find(5));  // Remove one 5
    cout << s1.count(5) << "\n";  // 1

    unordered_set<int> s3;

    s3.insert(10);
    s3.insert(1);
    s3.insert(7);
    s3.insert(3);

    for (int x : s3) {
        cout << x << " ";
    }
    // Output could be: 3 10 1 7 (UNORDERED!)

    



    return 0;
}