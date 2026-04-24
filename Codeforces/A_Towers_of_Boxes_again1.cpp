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

    int t; cin >> t;
    while(t--){
        int n,m,d;
        cin >> n >> m >> d;

        int sum = 0;
        int cnt = 1;
        while(n>1){
            sum +=m;
            if(sum>d){
                cnt++;
                sum =0;
            }
            n--;
        }
        cout << cnt << endl;
    }

    return 0;
}