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
    int findMaxConsecutiveOnes(vector<int>& nums){

        int n = nums.size();

        int cnt = 0;
        int ans = 0;
        for(int i=0; i<n; i++){
            int val = nums[i];
            if(val==1 && nums[i]==val){
                cnt++;
            }else{
                cnt = 0;
            }
            ans  = max(ans, cnt);
        }
        return ans;  
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
    cout << sol.findMaxConsecutiveOnes(a) << endl;

    return 0;
}