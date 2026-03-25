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

    lli n;
    cin >> n;

    lli ans = n*(n+1)/2;
    if(ans%2 !=0){
        cout <<"NO" << endl;
        return 0;
    }

    cout <<"YES" << endl;
    lli sum = ans/2;
    vl a,b;
    for(int i=n; i>=1; i--){
        if(sum >=i){
            sum -=i;
            a.push_back(i);
        }else{
            b.push_back(i);
        }
    }
    cout << a.size() <<endl;
    for(auto x : a){
        cout << x << " ";
    }
    cout << endl;
    cout << b.size() << endl;
    for(auto x : b){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}