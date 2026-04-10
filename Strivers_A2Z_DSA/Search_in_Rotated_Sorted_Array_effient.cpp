#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        int low = 0 , high  = n-1;

        while(low <= high){

        int mid = low+ (high-low)/2;
        if(nums[mid]==target) return mid;

        if(nums[low] <= nums[mid]){
            if(nums[low] <= target && target < nums[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }else{
            if(nums[mid]<target && target <= nums[high]){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }

    }
    return -1;


    //     int idx = -1;
    //     for(int i=0; i<n; i++){
    //         if(nums[i]==target){
    //             idx = i;
    //             break;
    //         }
    //     }
    //     return idx;
     }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

        Solution sol;

    int n, tg;
    cin >> n >> tg;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    cout << sol.search(a, tg) << endl;


    return 0;
}