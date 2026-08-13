#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e6;


void printBinary(int x){
    for(int i=7; i>=0; i--){
        if(x &(1<<i)) cout << "1";
        else cout << "0";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b;
    cin >> a >> b;
    cout << "a = ";
    printBinary(a);
    cout << endl;

    cout << "b = ";
    printBinary(b);
    cout << endl << endl;

    cout << "a & b = ";
    printBinary(a&b);
    cout << endl;
    
    cout << "a | b= ";
    printBinary(a|b);
    cout << endl;

    cout << "a^b = ";
    printBinary(a^b);
    cout << endl;

    cout <<"~a = ";
    printBinary(~a);
    cout << endl;

    return 0;
}