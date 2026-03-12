#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int findFloor(vi &a, int n, int x){

    int low = 0, high = n-1;
    int ans = -1;

    while(low<=high){
        int mid = low + (high-low)/2;
        if(a[mid]<=x){
            low = mid+1;
            ans = a[mid];
        }else{
            high = mid - 1;
        }
    }
    return ans;
}

int findCeil(vi &a, int n, int x){

    int low = 0, high = n-1;
    int ans = -1;

    while(low<=high){
        int mid = low + (high-low)/2;
        if(a[mid]>=x){
            high = mid-1;
            ans = a[mid];
        }else{
            low = mid + 1;
        }
    }
    return ans;
     
}

pair<int,int> getFloorAndCeil(vi &a, int n, int x){
    int f = findFloor(a, n, x);
    int c = findCeil(a, n, x);
    return make_pair(f,c);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,x;
    cin >> n >> x;

    vi a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    pair<int,int> ans = getFloorAndCeil(a,n,x);

    cout << ans.first << " "<< ans.second << endl;

    return 0;
}