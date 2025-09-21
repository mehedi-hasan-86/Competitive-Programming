#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int maxFrequencyBrute(vector<int> &nums, int k){
     sort(nums.begin(), nums.end());
        int n = nums.size();
        int best  = 1;
        
        for(int i=0; i<n; i++){
            long long target = nums[i];
            long long remaining = k;
            int cnt =  1;


            for(int j=i-1; j>=0; j--){
                long long cost = target - nums[j];
                if(remaining >= cost){
                    remaining -=cost;
                    cnt++;
                }else{
                    break;
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

    cout << maxFrequencyBrute(a,k) << endl;

    return 0;
}

