#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int findRotations(vi &a){
    int minIdx = 0;
    int minVal = a[0];
    for(int i=1; i<a.size(); i++){
        if(a[i]<minVal){
            minVal = a[i];
            minIdx  = i;
        }
    }
    return minIdx;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    cout << findRotations(a) << endl;

    return 0;
}