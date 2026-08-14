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

int n = 3;
vi subset;
void search(int k){
    if(k==n){
        cout << "{ ";
        for(auto x : subset){
            cout << x << " ";
        }
        cout << "}";
        cout << endl;
        return;
    }
    search(k+1);
    subset.push_back(k);
    search(k+1);
    subset.pop_back();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    search(0);
    

    return 0;
}