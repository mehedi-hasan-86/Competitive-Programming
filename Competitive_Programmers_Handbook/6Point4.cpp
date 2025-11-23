#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vi nums = {1,2,9,2,6};
    int n = nums.size();

    sort(nums.begin(), nums.end());
    int median = nums[n/2];
    int sum_abs = 0;
    for(int x : nums) sum_abs +=(x-median);

    cout <<"C=1 , minimum sum = " << sum_abs << " at x = " << median << endl;

    double mean = accumulate(nums.begin(), nums.end(), 0.0)/n;
    double sum_sq = 0;
    for(int x : nums ) sum_sq += (x- mean) * (x-mean);
    cout <<"C=2, minimum sum = " << sum_sq << " at x = " << mean << endl;

    return 0;
}