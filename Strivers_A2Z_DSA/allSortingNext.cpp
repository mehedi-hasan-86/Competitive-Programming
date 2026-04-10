


#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void merge(vector<int> &a, int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r-m;

    vector<int> L(n1), R(n2);
    for(int i=0; i<n1; i++) L[i] = a[l+i];
    for(int j=0; j<n2; j++) R[j] = a[m+1+j];

    int i=0, j=0, k = l;
    while(i<n1 && j<n2){
        if(L[i]<R[j]) a[k++] = L[i++];
        else a[k++] = R[j++];
    }

    while(i<n1) a[k++] = L[i++];
    while(j<n2) a[k++] = R[j++];
}



void mergeSort(vector<int> &a, int l, int r){
      if(l>=r) return;
      int m = l + (r-l)/2;
      mergeSort(a, l, m);
      mergeSort(a,m+1, r);
      merge(a, l, m, r);
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> v = {5,4,3,2,1};
    int n = v.size();
    mergeSort(v, 0, n-1);

    for(int x : v){
        cout << x << " ";
    }
    cout << endl;

    

    return 0;
}

