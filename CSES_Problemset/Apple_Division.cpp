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
    vl a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    
    lli diff = 1e9;
    for(int b=0; b<(1<<n); b++){
        lli sum1 = 0, sum2 = 0;
        for(int i=0; i<n; i++){
            if(b&(1<<i)){
                sum1 +=a[i];
            }else{
                sum2 +=a[i];
            }
        }
        diff = min(diff, abs(sum1-sum2));
    }
    cout << diff << endl;


    return 0;
}