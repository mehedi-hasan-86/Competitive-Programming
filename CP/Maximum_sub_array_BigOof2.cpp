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

    vi x(n);
    for(int i=0; i<n; i++){
        cin >> x[i];
    }
    int mxSum = 0;
    for(int a=0; a<n; a++){
        int sum = 0;
        for(int b = a; b<n; b++){
                sum += x[b];
                mxSum = max(mxSum, sum);
           
        }
    }
    cout << mxSum << endl;

    return 0;
}