#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int digit(lli k){
    k--;
    lli a = 1;
    lli b = 9;
    int c = 1;
    while(k>= (b-a+1)*c){
        k -=(b-a+1)*c;
        a = a*10;
        b = b*10+9;
        c++;
    }
    lli x = a+k/c;
    return to_string(x)[k%c]-'0';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int q;
    cin >> q;

    for(int i=0; i<q; i++){
        lli k;
        cin >> k;
        cout << digit(k) <<endl;
    }

    return 0;
}