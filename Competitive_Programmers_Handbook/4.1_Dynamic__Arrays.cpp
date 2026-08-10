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

    vector<int> v;
    v.push_back(3);   // [3]
    v.push_back(2);   // [3, 2]
    v.push_back(5);   // [3, 2, 5]

    cout << v[0] << "\n";  // 3
    cout << v[1] << "\n";  // 2
    cout << v[2] << "\n";  // 5

    cout << v.size() << "\n";  // 3

    // Method 1: Index loop
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    // Output: 3 2 5

    // Method 2: Range-based for (C++11)
    for (auto x : v) {
        cout << x << " ";
    }
    // Output: 3 2 5

    for(auto it = v.begin(); it != v.end(); it++){
        cout << (*it) << " ";
    }

    cout << v.back() << "\n";  //  (last element)
    v.pop_back();     //  (remove last)

    // Empty vector
    vector<int> v1;

    // With initial values
    vector<int> v2 = {2, 4, 2, 5, 1};

    // Size 10, all zeros
    vector<int> v3(10);

    // Size 10, all 5
    vector<int> v4(10, 5);

    // 2D vector (3 rows, 4 columns, all 0)
    vector<vector<int>> matrix(3, vector<int>(4, 0));

    // Copy from array
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> v5(arr, arr + 5);

    string s = "hello";

    // Access
    cout << s[0] << "\n";  // 'h'
    cout << s[1] << "\n";  // 'e'

    // Size
    cout << s.size() << "\n";  // 5

    // Concatenation
    string a = "hatti";
    string b = a + a;
    cout << b << "\n";  // "hattihatti"
    // Modify
    b[5] = 'v';
    cout << b << "\n";  // "hattivatti"

    // Substring
    string c = b.substr(3,4);
    cout << c << endl; // "tiva" (from index 3, lenght 4);

    // Find 
    string text = "hello world";
    int pos = text.find("world");

    if(pos != string::npos){
        cout <<"Found at : " << pos << endl;
    }


    


    

    return 0;
}