#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int findMin(vi &a){

    int low = 0, high = a.size()-1;

    while(low<high){
        int mid = low + (high-low)/2;

        if(a[mid]>a[high]){
            low = mid+1;
        }else{
            high = mid;
        }
    }

    return a[low];

 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int res = findMin(a);
    cout << res << endl;


    return 0;
}