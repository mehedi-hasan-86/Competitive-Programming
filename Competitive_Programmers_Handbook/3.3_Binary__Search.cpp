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

int binarySearch(vector<int>& array, int x, int n) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        
        if (array[mid] == x) {
            return mid; 
        }
        if (array[mid] > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    return -1;
}

int binarySearchJump(vector<int>& array, int x) {
    int n = array.size();
    int k = 0;
    
    for (int b = n/2; b >= 1; b /= 2) {
        while (k + b < n && array[k + b] <= x) {
            k += b;
        }
    }
    
    if (array[k] == x) {
        return k; 
    }
    return -1;
}


// ok(x) returns true if x is valid, false otherwise
// ok(x) = false for x < k, true for x ≥ k
int n;
bool ok(int x) {
    return 1LL * x * x >= n;
}

int findSmallestSolution(int z, int x) {
    int x = -1;
    for (int b = z; b >= 1; b /= 2) {
        while (!ok(x + b)) {
            x += b;
        }
    }
    return x + 1;  // Smallest x where ok(x) is true
}


// f(x) increases for x < k, decreases for x ≥ k
// Find maximum value of f(x)



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int array[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int n = 8;
    int x = 5;
    
    // lower_bound: first element ≥ x
    auto it1 = lower_bound(array, array + n, x);
    int pos1 = it1 - array;  // Index of first ≥ x
    
    // upper_bound: first element > x
    auto it2 = upper_bound(array, array + n, x);
    int pos2 = it2 - array;  // Index of first > x
    
    // equal_range: both bounds
    auto range = equal_range(array, array + n, x);
    int left = range.first - array;   // First ≥ x
    int right = range.second - array; // First > x
    
    // Count occurrences
    int count = right - left;
    
    // Check if exists
    bool exists = binary_search(array, array + n, x);
    
    cout << "First ≥ " << x << ": " << pos1 << "\n";
    cout << "First > " << x << ": " << pos2 << "\n";
    cout << "Count of " << x << ": " << count << "\n";
    cout << "Exists: " << exists << "\n";

    

    return 0;
}