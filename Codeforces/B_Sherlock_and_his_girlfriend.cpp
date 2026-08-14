#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
#define endl '\n'
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e6;

bool isPrime(int x){
    if(x<2) return false;

    for(int i=2; i*i <=x; i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // if(n==1){
    //     cout << 1 << endl;
    //     cout << 1 << endl;
    //     return 0;
    // }
    // if(n==2){
    //     cout << 1 << endl;
    //     cout << 1 << " " << 1 << " ";
    //     return 0;
    // }

    if(n<=2){
        cout << 1 << endl;
        for(int i=2; i<=n+1; i++){
            cout << 1  << " ";
        }
        cout << endl;
        return 0;
    }

    cout << 2 << endl;
    for(int i=2; i<=n+1; i++){
        if(isPrime(i)) cout << 1 << " ";
        else cout << 2 << " ";
    }
    cout << endl;

    return 0;
}