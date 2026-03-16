#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        int x = lower_bound(nums.begin(), nums.end(),target)-nums.begin();
        int y = upper_bound(nums.begin(), nums.end(), target)-nums.begin();
        
        return {x,y};
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin >> n >> k;

    vi a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    vi res = searchRange(a, k);
    cout << res[1]-res[0] << endl;

    return 0;
}