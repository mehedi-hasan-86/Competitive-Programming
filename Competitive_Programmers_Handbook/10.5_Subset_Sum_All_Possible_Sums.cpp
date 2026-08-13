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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

 vector<int> weights = {1, 3, 3, 5};
    int n = weights.size();
    int totalSum = 12;
    
    vector<bool> possible(totalSum + 1, false);
    possible[0] = true;
    
    for(int w : weights){
        for (int s = totalSum; s >= w; s--){
            if (possible[s - w]) {
                possible[s] = true;
            }
        }
    }

    for(int s = 0; s <= totalSum; s++){
        if (possible[s]) cout << s << " ";
    }
    cout << "\n";
    
    return 0;
}