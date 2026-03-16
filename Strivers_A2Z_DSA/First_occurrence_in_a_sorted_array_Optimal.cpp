#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int solve(int n, int key, vi &a){
    int res = -1;

    int start = 0;
    int end = n-1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(a[mid]==key){
            res = mid;
            end = mid-1;
        }else if(key<a[mid]){
            end  = mid-1;
        }else{
            start = mid+1;
        }
    }

    // for(int i=n-1; i>=0; i--){
    //     if(a[i]==key){
    //         res = i;
    //         break;
    //     }
    // }
   return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, key;
    cin >> n >> key;

    vi a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    cout << solve(n,key, a) << endl;

    return 0;
}