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
    int removeDuplicates(vector<int>& nums) {

        if(nums.empty()) return 0;
        
        set<int> st(nums.begin(), nums.end());

        int k = 0;
        for(int x : st){
            nums[k]=x;
            k++;
        }
        return k;
        
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

    cout << sol.removeDuplicates(a) << endl;



    return 0;
}