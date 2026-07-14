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

    int i=l, j = m+1;
    vector<int> tmp;
    while(i<=m && j<=r){
        if(a[i]<=a[j]){
            tmp.push_back(a[i++]);
        }else{
            tmp.push_back(a[j++]);
        }
    }
    while(i<=m) tmp.push_back(a[i++]);
    while(j<=r) tmp.push_back(a[j++]);

    for(int k=l; k<=r; k++){
        a[k] = tmp[k-l];
    }
}

void mergeSort(vector<int>&a, int l, int r){
    if(l>=r) return;

    int m = l+ (r-l)/2;
    mergeSort(a,l,m);
    mergeSort(a,m+1, r);
    merge(a,l,m,r);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    mergeSort(a,0,n-1);

    for(auto x : a){
        cout << x << " ";
    }
    cout << endl;


    return 0;
}