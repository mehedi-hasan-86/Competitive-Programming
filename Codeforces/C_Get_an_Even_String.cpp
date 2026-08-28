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
typedef vector<long long> vl;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e6;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int cur = 0;
        int del = 0;
        bool seen[26]={};
        for(char c : s){
            int x = c-'a';

            if(seen[x]){
                del += cur -1;
                memset(seen, false, sizeof(seen));
                cur = 0;
            }else{
            seen[x] = true;
            cur++;
        }
    }
    del += cur;
    cout << del << endl;
}
    return 0;
}