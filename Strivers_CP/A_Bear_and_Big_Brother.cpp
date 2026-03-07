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

    int a,b;
    cin >> a >> b;

    int years = 0;
    while(a<=b){
        a =a*3;
        b =b*2;
        
        years++;
    }
    cout << years << endl;

    return 0;
}