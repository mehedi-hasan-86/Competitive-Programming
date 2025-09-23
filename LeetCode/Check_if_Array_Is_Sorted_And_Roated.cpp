#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

bool check(vector<int> &nums){
    int n = nums.size();
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(nums[i]>nums[(i+1)%n]){
            cnt++;
        }
    }
    return cnt <=1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n ; i++){
        cin >> a[i];
    }
    cout << (check(a) ? "true" : "fasle") << endl;

    return 0;
}