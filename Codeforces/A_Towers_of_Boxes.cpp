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
        int n,m,d;
        cin >> n >> m >> d;

        int h  = 1;
        while((h-1)*m <= d){
            h++;
        }
        h--;

        int tw = 0;
        while(n>0){
            n -=h;
            tw++;
        }
        cout << tw << endl;
    }

    return 0;
}