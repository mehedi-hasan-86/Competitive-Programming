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
    int searchInsert(vector<int>& nums, int target) {
        

    int ans = lower_bound(nums.begin(), nums.end(), target)- nums.begin();

    return ans;

  

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
    cout << sol.searchInsert(a, tg);



    return 0;
}