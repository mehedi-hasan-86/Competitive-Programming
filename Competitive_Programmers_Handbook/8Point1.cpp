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

    int n,x;
    cin >> n >> x;

    vi a(n);
    for(int i=0; i<n;i++) cin >> a[i];

    int left  = 0, right = 0;
    int curr_sum = 0;
    bool found =false;

    while(right<=n){
        if(curr_sum < x){
            if(right == n) break;
            curr_sum +=a[right];
            right++;
        }else if(curr_sum > x){
            curr_sum -=a[left];
            left++;
        }else{
            found = true;
            cout << "Subarray found from index " << left << " to " << right -1 <<endl;
            break;
        }
    }
    if(!found) cout <<"No subarray with sum " << x << endl;

    return 0;
}