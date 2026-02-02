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

    lli n,k,x;
    cin >> n >> k >> x;

    vl a(n);
    for(int i=0; i<n; i++){
     cin >> a[i];
    }
    
    sort(a.begin(), a.end());

    vl need;
    for(int i=1; i<n; i++){
        lli diff = a[i]- a[i-1];
        if(diff>x){
          need.push_back((diff-1)/x);
        }
    }
    sort(need.begin(), need.end());
    lli groups = need.size()+1;

    for(lli v : need){
        if(k>=v){
            k -=v;
            groups--;
        }else break;
    }
    cout << groups << endl;

    return 0;
}