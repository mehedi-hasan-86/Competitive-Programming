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

void bubble_sort(vi &array,int n){
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
        if (array[j] > array[j + 1]) {
            swap(array[j], array[j + 1]);
        }
    }
}
}




int countInversions(vector<int>& arr) {
    int n = arr.size();
    int inversions = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                inversions++;
            }
        }
    }
    
    return inversions;
}


void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    vector<int> L(n1), R(n2);
    
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];
    
    int i = 0, j = 0, k = left;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = L[i];
        i++; k++;
    }
    
    while (j < n2) {
        arr[k] = R[j];
        j++; k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    

    return 0;
}