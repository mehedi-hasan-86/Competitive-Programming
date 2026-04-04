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

    int t;
    cin >> t;

    while(t--){
        vi a(7);
        for(int i=0; i<7; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        lli sum = a[6];
        for(int i=0; i<6; i++){
          sum -=a[i];
        }
        cout << sum << endl;
    }

    return 0;
}