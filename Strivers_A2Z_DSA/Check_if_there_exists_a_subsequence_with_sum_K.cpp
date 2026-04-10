#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

bool func(int ind, int sum, vi &nums){
    if(ind == nums.size()){
        return sum == 0;
    }
    return func(ind+1, sum-nums[ind], nums) | func(ind+1,sum, nums);
}

bool checkSubSequenceSum(vi nums, int target){
    return func(0, target, nums);
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vi nums = { 1,2,3,4};
    int target = 5;
    cout << checkSubSequenceSum(nums, target) << endl;
    return 0;
}