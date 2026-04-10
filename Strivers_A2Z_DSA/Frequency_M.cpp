#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

class Solution{
    public:
    int maxFrequency(vector<int> &nums, int k){
        sort(nums.begin(), nums.end());
        int n = nums.size();

        vector<long long> prefix(n,0);
        prefix[0] = nums[0];
        for(int i=1; i<n; i++){
            prefix[i] = prefix[i-1]+nums[i];
        }

        int ans = 1;

        for(int i=0; i<n; i++){
            int l = 0, r = i;
            int leftMost = i;

            while(l<=r){
                int mid = l + (r-l)/2;
                long long window = prefix[i] - (mid>0 ? prefix[mid-1]:0);
                long long cost = 1LL*nums[i]*(i-mid+1) - window;

                if(cost <= k){
                    leftMost = mid;
                    r = mid-1;
                }else{
                    l =  mid+1;
                }
            }
            ans = max(ans, i-leftMost+1);
        }
        return ans;
    }

};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    Solution sol;
    cout << sol.maxFrequency(a,k) << endl;

    return 0;
}