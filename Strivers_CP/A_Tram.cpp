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


    int mxCapacity = 0;
    int pp = 0;
    for(int i=0; i<n; i++){
        int a,b;
        cin >> a >> b;

        pp=pp-a;
        pp +=b;

        mxCapacity = max(pp,mxCapacity);
    }
    cout << mxCapacity << endl;

    return 0;
}