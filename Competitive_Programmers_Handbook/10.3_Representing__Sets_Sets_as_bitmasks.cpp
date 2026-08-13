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

void printSet(int mask){
    cout << "{ ";
    for(int i=0; i<32; i++){
        if(mask & (1<<i)){
            cout << i << " ";
        }
    }
    cout << "}\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;

    int x = 0,  y = 0;
    for(int i=0; i<n; i++){
        int ele;
        cin >> ele;
        x = x |(1<<ele);
    }

    for(int i=0; i<m; i++){
        int ele;
        cin >> ele;
        y = y | (1<<ele);
    }

    cout << "x = ";
    printSet(x);
    cout <<"y = ";
    printSet(y);

    // Set operations 
    cout << "\nx n y = ";
    printSet(x & y);

    cout << "x U y = ";
    printSet(x | y);

    cout << "x\\y = ";
    printSet(x & ~y);

    cout << "y\\x = ";
    printSet(y &~x);

    // Size of set
    cout << "\n|x| = " << __builtin_popcount(x) << endl;
    cout <<"|y| = " << __builtin_popcount(y) << endl;
    cout << "|x U y| = " << __builtin_popcount(x|y) << endl;

    

    return 0;
}