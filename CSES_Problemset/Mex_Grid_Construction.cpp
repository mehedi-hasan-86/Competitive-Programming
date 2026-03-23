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

    int n;
    cin >> n;

    vector<vi> grid(n, vi (n,0));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            set<int> used;

            for(int k=0; k<j; k++){
                used.insert(grid[i][k]);
            }
            for(int k=0; k<i; k++){
                used.insert(grid[k][j]);
            }

            int x = 0;
            while(used.count(x)) x++;
            grid[i][j] = x;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << grid[i][j] << (j==n-1? "\n": " ");
        }
    }

    return 0;
}