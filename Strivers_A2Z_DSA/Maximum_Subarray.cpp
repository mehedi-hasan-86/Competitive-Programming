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
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int current_sum = 0;

        for(int x : nums){
            current_sum +=x;

            if(current_sum > max_sum){
                max_sum = current_sum;
            }

            if(current_sum < 0){
                current_sum = 0;
            }

        }
        return max_sum;
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
        cin  >> a[i];
    }
    cout << sol.maxSubArray(a) << endl;

    return 0;
}