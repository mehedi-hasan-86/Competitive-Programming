#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

double myPow(double x, int n){
    if(n==0 || x == 1.0) return 1;

    lli temp = n;

    if(n<0){
        x = 1/x;
        temp = -1*1LL*n;
    }

    double ans = 1;
    for(lli i =0; i<temp; i++){
        ans *=x;
    }
    return ans;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    double x;
    int n;
    cin >> x >> n;

    cout << myPow(x,n) << endl;


    return 0;
}