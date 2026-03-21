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

    lli n;
    cin >> n;

    cout << n << " ";
    while(n !=1){
        if(n%2==0){
            n /=2;
        }else{
            n =(n*3+1);
        }
        cout << n << " ";
    }
    cout << endl;
    return 0;
}