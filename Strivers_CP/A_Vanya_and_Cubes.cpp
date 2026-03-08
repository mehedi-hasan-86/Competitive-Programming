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

    int ans = 0;
    int res = 0;
    int i=1;
    int cnt = 0;
    while(res<=n){
        ans +=i;
        i++;
        res +=ans;
        cnt++;  
    }
    cout << cnt-1<< endl;
    return 0;
}