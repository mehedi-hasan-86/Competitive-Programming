#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const int N = 105;
int value[N][N];
int sum[N][N];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for(int y=1; y<=n; y++){
        for(int x=1; x<=n; x++){
            cin >> value[y][x];
        }
    }

    for(int y=0; y<=n; y++) sum[y][0] = 0;
    for(int x= 0; x<=n; x++) sum[0][x] = 0;

    for(int y=1; y<=n; y++){
        for(int x=1; x<=n; x++){
            sum[y][x] = value[y][x]+ max(sum[y][x-1], sum[y-1][x]);
        }
    }
    cout << sum[n][n] << endl;



    return 0;
}