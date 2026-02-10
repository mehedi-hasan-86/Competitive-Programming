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

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for(int i=0; i<n; i++){
        if(a[i]==0) cnt0++;
        else if(a[i]==1) cnt1++;
        else cnt2++;
    }


    int idx = 0;
    while(cnt0--){
       a[idx++] = 0;
    }

    while(cnt1--){
        a[idx++] = 1;
    }
    while(cnt2--){
        a[idx++] = 2;
    }

    for(int x : a){
        cout << x << " ";
    }
    cout << endl;



    return 0;
}