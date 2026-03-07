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

    int k,w;
    lli n;
    cin >> k >> n >> w;

    lli total_amount = 0;
    for(int i=0; i<w; i++){
        total_amount += k*(i+1);
    }

    if(total_amount>n){
        cout << total_amount - n << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}