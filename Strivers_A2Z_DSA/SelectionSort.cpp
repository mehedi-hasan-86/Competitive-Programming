#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void selectionSort(vi &a){
    int n = a.size();

    for(int i=0; i<n-1;i++){
        int minIdx = i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[minIdx]){
                minIdx = j;
            }
        }
        if(i != minIdx){
           swap(a[i], a[minIdx]);
        }
        
    }
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

    selectionSort(a);

    for(auto i : a){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}