#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void bubbleSort(int a[], int n){
    if(n==1) return;

    for(int i=0; i<n-1; i++){
        if(a[i]>a[i+1]){
            swap(a[i], a[i+1]);
        }
    }
    bubbleSort(a, n-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a[] = {5,1,4,2,8};
    int n = sizeof(a)/sizeof(a[0]);

    bubbleSort(a,n);

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }

    return 0;
}