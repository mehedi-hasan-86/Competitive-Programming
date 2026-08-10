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

    vector<int> v = {10, 20, 30, 40, 50};

    // begin() points to first element
    auto t = v.begin();
    cout << *t << "\n";  // 10

    // Move forward
    t++;
    cout << *t << "\n";  // 20

    // Move backward
    t--;
    cout << *t << "\n";  // 10

    // end() points after last element
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    // Output: 10 20 30 40 50


    // Sort entire range
    sort(v.begin(), v.end());
    // v = [1, 2, 3, 5, 8, 9]

    // Reverse
    reverse(v.begin(), v.end());
    // v = [9, 8, 5, 3, 2, 1]

    // Sort partial range (indices 1 to 3)
    sort(v.begin() + 1, v.begin() + 4);
    // Sorts elements at indices 1, 2, 3

    // With arrays
    int a[] = {5, 2, 8, 1, 9, 3};
    int n = 6;
    sort(a, a + n);

    set<int> s = {2, 5, 6, 8};

    // First element
    auto it = s.begin();
    cout << *it << "\n";  // 2

    // Last element
    auto it2 = s.end();
    --it2;
    cout << *it2 << "\n";  // 8

    // find()
    auto it3 = s.find(5);
    if (it3 != s.end()) {
        cout << "Found: " << *it3 << "\n";
    }

    // lower_bound() - first element ≥ x
    auto it4 = s.lower_bound(5);
    cout << *it4 << "\n";  // 5

    auto it5 = s.lower_bound(6);
    cout << *it5 << "\n";  // 6

    // upper_bound() - first element > x
    auto it6 = s.upper_bound(5);
    cout << *it6 << "\n";  // 6

    set<int> s1 = { 10,20,30,40,50};
    int x = 25;

    auto i = s1.lower_bound(x);
    if(i == s1.begin()){
        cout << "Closest: " << *i << endl;
    }else if(i == s1.end()){
        --i;
        cout << "Closest: " << *i << endl;
    }else{
        int a = *i; // first >=x
        --i;
        int b = *i; // last <x

        if(x-b <= a-x){
            cout <<"Closest: " << b << endl;
        }else{
            cout << "Closest: " << a << endl;
        }

    }

    return 0;
}