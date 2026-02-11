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


    int sum = a[0], mx = a[0];

    // for(int i=1; i<n; i++){
    //    sum += a[i];
    //    if(sum > mx ){
    //     mx = sum;
    //    }
    //    if(sum <0){
    //      sum = 0;
    //    }
    // }
    // cout << mx << endl;

    for(int i=1; i<n; i++){
      sum = max(a[i], sum + a[i]);
      mx = max(sum, mx);
    }
    cout << mx << endl;


    return 0;
}