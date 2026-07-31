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

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int target;
    cin >> target;

    int l = 0;
    int r = n-1;

    while(l<r){
        int sum  = a[l] + a[r];
        
        if(sum== target){
            cout <<"YES" << endl;
            return 0;
        }else if(sum < target){
            l++;
        }else{
            r--;
        }
    }
    cout << "NO" << endl;

    return 0;
}