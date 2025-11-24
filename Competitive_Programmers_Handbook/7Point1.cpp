#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;


const int INF = 1e9;
const int N = 1e6+5;

int coins[105];
int value[N];
bool ready[N];

int n,x;

int solve(int x){
    if(x<0) return INF;
    if(x==0) return 0;
    if(ready[x])  return value[x];
    int best = INF;
    for(int i=0; i<n; i++){
        best = min(best, solve(x-coins[i])+1);
    }
    value[x] = best;
    ready[x]= true;
    return best;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >>  n >> x;
    for(int i=0; i<n; i++){
        cin >> coins[i];
    }
    cout << solve(x) << endl;
    

    return 0;
}