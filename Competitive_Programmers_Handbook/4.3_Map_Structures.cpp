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

    map<string, int> m;

    // Insert key-value pairs
    m["monkey"] = 4;
    m["banna"] = 3;
    m["harpsichord"] = 9;

    // Access
    cout << m["banna"] << endl; // 3
    cout << m["monkey"] << endl; // 4

    // Accessing missing key ADDS it with default value !
    cout << m["aybabtu"] << endl; // 0 (default int)

    cout << m.size() << endl; // 4 (key was added!)

    if(m.count("banna")){
        cout <<"banna exists!\n";
    }

    auto it = m.find("banna");
    if(it != m.end()){
        cout << "Found: " << it->first << " " << it->second << endl;
    }

    cout << endl;
    // Iterate (sorted by key!)
    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }

    cout << endl;
    unordered_map<string, int> m1;

    m1["monkey"] = 4;
    m1["banana"] = 3;
    m1["harpsichord"] = 9;

    for (auto p : m1) {
        cout << p.first << " " << p.second << "\n";
    }
    // Output in ANY order (not guaranteed!)



    return 0;
}