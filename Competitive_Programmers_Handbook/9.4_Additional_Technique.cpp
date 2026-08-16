#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6};
    int n = arr.size();
    
    // Build difference array
    vector<int> diff(n + 1, 0);
    diff[0] = arr[0];
    for (int i = 1; i < n; i++) {
        diff[i] = arr[i] - arr[i-1];
    }
    
    cout << "Original: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";
    
    cout << "Diff:     ";
    for (int i = 0; i < n; i++) cout << diff[i] << " ";
    cout << "\n\n";
    
    // Range add: add 2 to range [2, 5]
    int l = 2, r = 5, val = 2;
    diff[l] += val;
    diff[r + 1] -= val;
    
    cout << "After adding 2 to range [2,5]:\n";
    cout << "Diff: ";
    for (int i = 0; i <= n; i++) cout << diff[i] << " ";
    cout << "\n";
    
    // Reconstruct array
    vector<int> newArr(n);
    int curr = 0;
    for (int i = 0; i < n; i++) {
        curr += diff[i];
        newArr[i] = curr;
    }
    
    cout << "New array: ";
    for (int x : newArr) cout << x << " ";
    cout << "\n";
    
    return 0;
}