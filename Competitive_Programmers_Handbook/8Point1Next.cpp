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
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    int left = 0, right = n-1;

    bool found = false;

    while(left<right){
        int sum = a[left]+a[right];
        if(sum == x){
            cout << "pair found : " << a[left] << " + " << a[right] << " = " << x << endl;
            found = true;
            break;
        }else if(sum < x){
            left++;
        }else{
            right--;
        }
    }
    if(!found) cout << "No pair with sum " << x << endl;

    return 0;
}