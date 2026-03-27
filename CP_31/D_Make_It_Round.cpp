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
        lli n,m;
        cin >> n >> m;

        lli k =1;
        lli tmp = n;

        int cnt2 = 0, cnt5=0;
        while(tmp%2==0){
            tmp /=2;
            cnt2++;
        }
        tmp = n;
        while(tmp%5==0){
            tmp /=5;
            cnt5++;
        }

        while(cnt2<cnt5 && k*2 <= m){
            cnt2++;
            k *=2;
        }
        while(cnt5<cnt2 && k*5 <=m){
            cnt5++;
            k *=5;
        }

        while(k*10 <=m){
            k *=10;
        }

        k *=(m/k);
        cout << n*k << endl;
    }

    return 0;
}