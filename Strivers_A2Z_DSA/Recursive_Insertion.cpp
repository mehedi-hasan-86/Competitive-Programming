#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void insertionSort(int a[], int n){
    if(n<=1) return;

    insertionSort(a,n-1);

    int lst = a[n-1];
    int j = n-2;

    while(j>=0 && a[j]>lst){
        a[j+1] = a[j];
        j--;
    }
    a[j+1] = lst;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a[] = {5,1,4,2,8};
    int n = sizeof(a)/sizeof(a[0]);

    insertionSort(a,n);

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }

    return 0;
}