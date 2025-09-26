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
    void rotate(vector<int>& nums, int k){
      
        int n = nums.size();
        k %=n;
     
        vector<int> temp;
        for(int  i=n-k; i<n; i++){
            temp.push_back(nums[i]);
        }

        for(int i=0; i<n-k;  i++){
            temp.push_back(nums[i]);
        }
        nums = temp;  
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    Solution sol;

    int n,k;
    cin >> n  >> k;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sol.rotate(a, k);

    return 0;
}