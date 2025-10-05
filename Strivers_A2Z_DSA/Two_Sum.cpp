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
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int l = 0, r = n-1;
        while(l<r){
            if(nums[l]+nums[r]==target){
                return {l,r};
            }else if(nums[l]+nums[r] > target){
              r--;
            }else{
                l++;
            }
        }
        return {-1,-1};
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    Solution sol;

    int n, tg;
    cin >>  n >> tg;
    
    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    vi b = sol.twoSum(a, tg);
    for(auto x : b){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}