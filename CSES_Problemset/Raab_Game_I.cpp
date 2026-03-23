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
        int n,a,b;
        cin >> n >> a >> b;
        if(a==0 and b ==0){
            cout <<"YES" << endl;
            for(int i=1; i<=n; i++) cout << i << " "; cout << endl;
            for(int i=1; i<=n; i++) cout << i << " "; cout << endl;
            continue;
        }
        if(a==0 || b==0 or a+b>n){
            cout <<"NO" << endl;
            continue;
        }
        cout <<"YES" << endl;
        for(int i=1; i<=n;i++) cout << i << " "; cout << endl;
        int offset = n-a-b;
         for(int i=0;i<offset;i++) cout<<i+1<<" ";
        for(int i=offset+a;i<n;i++) cout<<i+1<<" ";
        for(int i=offset;i<offset+a;i++) cout<<i+1<<" ";
    cout<<"\n";

    }

    return 0;
}