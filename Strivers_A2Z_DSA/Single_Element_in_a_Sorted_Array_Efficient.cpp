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
    int singleNonDuplicate(vector<int>& nums){
           int low = 0, high = nums.size()-1;

           while(low < high){
            int mid = low + (high - low)/2;

            if(mid %2 == 1) mid--;
            if(nums[mid]==nums[mid+1]){
                low = mid+2;
            }else{
                high = mid;
            }
           }
           return nums[low];
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    Solution sol;

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << sol.singleNonDuplicate(a) << endl;

    return 0;
}