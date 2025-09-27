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
    void moveZeroes(vector<int>& nums){

        vector<int> v;
        int cnt = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                v.push_back(nums[i]);
            }else{
                cnt++;
            }
        }
        for(int i=0; i<cnt; i++){
            v.push_back(0);
        }

        nums = v;
        
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

    sol.moveZeroes(a);

    for(int x : a) cout << x << " ";
    cout << endl;

    return 0;
}