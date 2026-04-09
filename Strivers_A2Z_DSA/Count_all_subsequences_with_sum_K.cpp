#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int func(int ind, int sum, vi &nums){
    if(sum==0) return 1;
    if(sum<0 || ind == nums.size()) return 0;
    
    return func(ind+1, sum-nums[ind], nums)+ func(ind+1, sum , nums);
}

int cntSubSeqWithTargetSum(vi nums, int target){
    return func(0, target, nums);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin >> n >> k;

    vi a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    cout << cntSubSeqWithTargetSum(a,k) << endl;

    return 0;
}