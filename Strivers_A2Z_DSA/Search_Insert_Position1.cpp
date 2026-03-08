#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int searchInsert(vi &a, int x){
    int low = 0, high = a.size()-1;
    int ans = a.size();

    while(low<=high){
        int mid = low + (high - low)/2;

        if(a[mid]>=x){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,x;
    cin >> n >> x;

    vi a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int idx = searchInsert(a, x);
    cout << idx << endl;

    return 0;
}