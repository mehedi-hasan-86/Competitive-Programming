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
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        if(lb == n || nums[lb] != target){
            return {-1,-1};
        }
        int ub = upper_bound(nums.begin(), nums.end(), target) - nums.begin();


        return {lb, ub-1};
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

    vi b = sol.searchRange(a,tg);

    for(auto x : b){
        cout << x  << " ";
    }
    cout << endl;
    



    return 0;
}