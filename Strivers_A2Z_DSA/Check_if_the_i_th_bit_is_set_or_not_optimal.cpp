#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

bool checkIthBit(int n, int b){
    string binary = "";

     return (n&(1<<b)) != 0;
    // while(n>0){
    //     binary += (n%2==0 ? '0':'1');
    //     n /=2;
    // }

    // if(b>=binary.size()) return false;
    // return binary[b] =='1';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, b;
    cin >> n >> b;

    if(checkIthBit(n, b)) cout << "YES"<< endl;
    else cout << "NO" << endl;

    return 0;
}