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


    int a[6][6];
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cin >> a[i][j];
        }
    }

    int x = 0,y =0;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(a[i][j]==1){
                x= i;
                y= j;
                break;
            }
        }
    }
    cout <<( abs(x-3) + abs(y-3)) << endl;
    return 0;
}