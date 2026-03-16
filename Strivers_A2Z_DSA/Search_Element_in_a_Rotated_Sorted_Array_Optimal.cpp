#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int search(vi &a, int target){

    int low = 0;
    int high = a.size()-1;

    while(low<=high){
        int mid = low + (high-low)/2;
        if(a[mid]==target){
            return mid;
        }

        if(a[low]<=a[mid]){
            if(a[low]<= target && target< a[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }else{
            if(a[mid]<target && target<=nums[high]){
                low = mid+1;
            }else{
                high = mid-1;
            }

        }
        return -1;

    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, target;
    cin >> n >> target;

    vi a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int res = search(a, target);
    cout << res << endl;

    return 0;
}