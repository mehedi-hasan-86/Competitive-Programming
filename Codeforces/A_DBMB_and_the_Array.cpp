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

    int t;
    cin >> t;

    while(t--){
        int n,s,x;
        cin >> n >> s >> x;

        int sum = 0;
        
        vi a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        sum = accumulate(a.begin(), a.end(),0);
        if(sum==s){
            cout << "YES" << endl;
            continue;
        }

        int rem = (s-sum);
        if(rem%x==0 && rem>0){
            cout <<"YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }



    return 0;
}