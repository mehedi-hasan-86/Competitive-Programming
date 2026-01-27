#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int largest = a[0], secondLargest  = -1;
    for(int i=1; i<n; i++){
        if(a[i]>largest){
            secondLargest = largest;
            largest = a[i];
        }else if(a[i] < largest && a[i]>secondLargest){
            secondLargest = a[i];
        }
    
    }
    cout << largest << endl;
    cout << secondLargest << endl;

    return 0;
}