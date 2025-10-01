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
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        
        int left = 0, right = n-1;
        while(left <= right){
            int mid = left + (right-left)/2;

            if(nums[mid]== target){
                return mid;
            }else if(nums[mid]>target){
                right = mid-1;
            }else{
                left = mid+1;
        }

        }
        return -1;


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

    cout << sol.search(a,tg) << endl;


    return 0;
}