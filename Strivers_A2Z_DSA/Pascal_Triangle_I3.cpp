#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

lli findPascalElement(int r, int c){
    int n = r-1;
    int k = c-1;

    lli res = 1;

    for(int i=0; i<k; i++){
        res *=(n-i);
        res /=(i+1);
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int r,c;
    cin >> r >> c;
    cout <<findPascalElement(r,c);

    return 0;
}