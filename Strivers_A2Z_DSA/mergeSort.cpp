#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void merge(vi &a, int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r-m;

    vi L(n1), R(n2);

    for(int i=0; i<n1; i++){
        L[i] = a[l+i];
    }
    for(int i=0; i<n2; i++){
        R[i] = a[m+1+i];
    }
    int i = 0, j = 0, k=l;

    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            a[k++] = L[i++];
        }else{
            a[k++] = R[j++];
        }
    }
    while(i<n1) a[k++] = L[i++];
    while(j<n2) a[k++] = R[j++];
}

void mergeSort(vi &a, int l, int r){
    if(l>=r) return ;

    int m = l + (r-l)/2;
    mergeSort(a, l,m);
    mergeSort(a,m+1, r);
    merge(a,l,m,r);
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

    mergeSort(a, 0, a.size()-1);
    for(int x : a){
        cout << x << " ";
    }

    return 0;
}