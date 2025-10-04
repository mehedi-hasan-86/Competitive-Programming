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
    int singleNonDuplicate(vector<int>& nums) {
        for(int i=0; i< nums.size();i++){
            if(nums[i] !=nums[i+1] || i == nums.size()-1){
                return nums[i]; 
            }
            i++;
        }
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