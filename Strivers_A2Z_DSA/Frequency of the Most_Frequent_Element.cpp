#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int maxFrequency(vector<int> &nums, int k){
    sort(nums.begin(), nums.end());
    int n  = nums.size();
    int best = 1;
    for(int i=0; i<n; i++){
        int target = nums[i];
        int rem = k;
        int cnt = 1;
        for(int j=i-1; j>=0; j--){
            int cost = target - nums[j];
            if(rem >=cost){
                rem -=cost;
                cnt++;
            }
        }
        best  = max(best, cnt);
    }
    return best;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    cout << maxFrequency(a,k) << endl;

    return 0;
}