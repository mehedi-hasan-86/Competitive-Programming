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

    vector<int> a(n+1);
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    int maxIdx = 1;
    for(int i=2; i<=n; i++){
        if(a[i]>a[maxIdx]){
            maxIdx = i;
        }
    }

    // cout << maxIdx << endl;
    int minIdx = n;
    for(int i=n-1; i>=1; i--){
        if(a[i]<a[minIdx]){
            minIdx = i;
        }
    }
    // cout << minIdx << endl;

    if(minIdx > maxIdx){
        cout << (maxIdx -1) + (n-minIdx) << endl;
    }else{
        cout << (maxIdx -1) + (n-minIdx) - 1 << endl;
    }




    return 0;
}