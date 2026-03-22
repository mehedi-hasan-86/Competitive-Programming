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

    lli s = n*(n+1)/2;
    if(s%2==1){
        cout <<"NO" << endl;
        return 0;
    }
    s/=2;
    vi s1,s2;
    for(int i=n; i>=1; i--){
        if(s>=i){
            s -=i;
            s1.push_back(i);
        }else{
            s2.push_back(i);
        }
    }
    cout << "YES" << endl;
    cout << s1.size() << endl;
    for(auto x : s1) cout << x << " ";
    cout << endl;

    cout << s2.size() << endl;
    for(auto x : s2) cout << x << " ";
    cout << endl;

    return 0;
}