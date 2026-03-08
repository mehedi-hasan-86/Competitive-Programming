#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int binarySearch(vi &nums,int low, int high, int target){

    if(low>high) return -1;
    int mid = low + (high -low)/2;

    if(nums[mid]==target) return mid;
    else if(target>nums[mid]) binarySearch(nums, mid+1, high, target);
    else binarySearch(nums, low, mid-1, target);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, target;
    cin >> n >> target;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << binarySearch(a, 0, n-1, target);
    return 0;
}