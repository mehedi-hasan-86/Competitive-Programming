#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void merge(vi &a, int low, int mid , int high){
    int n1 = mid - low+1, n2 = high-mid;
    vi m(n1),  n(n2);
    for(int i=0; i<n1; i++) m[i] = a[low+i];
    for(int j=0; j<n2; j++) n[j] = a[mid+1+j];

    int i=0, j=0 , k = low;
    while(i<n1 && j<n2){
        if(m[i]<n[j]){
            a[k++] = m[i++];
        }else{
            a[k++] = n[j++];
        }
    }

    while(i<n1) a[k++] = m[i++];
    while(j<n2) a[k++] = n[j++];

}

void mergeSort(vi &a, int low, int high){
    if(low>= high) return;

    int mid = low + (high-low)/2;
    mergeSort(a, low, mid);
    mergeSort(a, mid+1, high);
    merge(a, low, mid, high);

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    // bool swapped;
    // for(int i=0; i<n-1; i++){
    //     swapped = false;
    //     for(int j=0; j<n-1-i; j++){
    //         if(a[j]>a[j+1]){
    //             swap(a[j], a[j+1]);
    //             swapped = true;
    //         }
    //     }
    //     if(!swapped) break;

    // }

    mergeSort(a, 0, n-1);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}