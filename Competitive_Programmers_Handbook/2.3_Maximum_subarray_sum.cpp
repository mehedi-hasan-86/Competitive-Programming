#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;


void mxSubArray_Bruteforces(vi &ar, int n){
    int best = 0;
    for (int a = 0; a < n; a++) {
        for (int b = a; b < n; b++) {
            int sum = 0;
            for (int k = a; k <= b; k++) {
                sum += ar[k];
            }
            best = max(best, sum);
        }
    }
    cout << best << "\n";
}

void improve(vi &ar, int n){
    int best = 0;
    for (int a = 0; a < n; a++) {
        int sum = 0;
        for (int b = a; b < n; b++) {
            sum += ar[b];
            best = max(best, sum);
        }
    }
    cout << best << "\n";
}
void kadanes__algorithm(vi &a, int n){
    int best = 0;
    int sum = 0;
    for (int k = 0; k < n; k++) {
        sum = max(a[k], sum + a[k]);
        best = max(best, sum);
    }
    cout << best << "\n";
}
int mxProduct(vi &nums){

    int n = nums.size();
    if(n==0) return 0;

    int mx_product = nums[0];
    int mn_product = nums[0];
    int res = nums[0];

    for(int i=1; i<n; i++){
        if(nums[i]<0){
            swap(mx_product, mn_product);
        }
        mx_product = max(nums[i], mx_product* nums[i]);
        mn_product = min(nums[i], mn_product * nums[i]);

        res = max(res, mx_product);
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

     // Kadane's Algorithm with indices

    int best = 0, sum = 0;
    int temp_start = 0, start = 0, end = 0;
    for(int k=0; k<n; k++){
        if(sum + a[k]<a[k]){
            sum = a[k];
            temp_start = k;
        }else{
            sum = sum + a[k];
        }
        if(sum>best){
            best = sum;
            start = temp_start;
            end = k;
        }
    }
    cout << best << endl;
    for(int i=start; i<=end; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << mxProduct(a) << endl;

    return 0;
}