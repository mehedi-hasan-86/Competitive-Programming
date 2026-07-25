#include<bits/stdc++.h>
using namespace std;

long long merge(vector<int> &a,int l,int m,int r){
    vector<int> temp;
    int i=l,j=m+1;
    long long inv=0;

    while(i<=m&&j<=r){
        if(a[i]<=a[j]) temp.push_back(a[i++]);
        else{
            temp.push_back(a[j++]);
            inv+=m-i+1;
        }
    }

    while(i<=m) temp.push_back(a[i++]);
    while(j<=r) temp.push_back(a[j++]);

    for(int k=l;k<=r;k++) a[k]=temp[k-l];

    return inv;
}

long long mergeSort(vector<int> &a,int l,int r){
    if(l>=r) return 0;

    int m=(l+r)/2;

    return mergeSort(a,l,m)+mergeSort(a,m+1,r)+merge(a,l,m,r);
}

int main(){
    int n;
    cin>>n;

    vector<int> a(n);
    for(int &x:a) cin>>x;

    cout<<mergeSort(a,0,n-1);
}
