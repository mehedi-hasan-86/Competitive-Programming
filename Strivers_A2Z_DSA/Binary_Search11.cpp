#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int binarySearch(vi &nums, int target){
    int n = nums.size();
    int low = 0, high = n-1;

    while(low<=high){
        int mid = low + (high -low)/2;
        if(nums[mid]==target) return mid;
        else if(target>nums[mid]) low = mid+1;
        else high = mid-1;
    }
    return -1;
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

    cout << binarySearch(a, target);





    return 0;
}