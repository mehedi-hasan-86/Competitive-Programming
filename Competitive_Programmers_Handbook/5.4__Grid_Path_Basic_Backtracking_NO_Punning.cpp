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
const int MOD = 1e9+ 7;
const int N = 1e6;


int n;
int countPaths = 0;
vector<vector<bool>> visited;

void search(int x, int y){
    if(x==n-1 && y== n-1){
        if(visited[x][y]){
            bool allVisited = true;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(!visited[i][j]) allVisited  = false;
                }
            }
            if(allVisited) countPaths++;
        }
        return;
    }
    int dx[] = {1,-1,0,0};
    int dy[] = {0,0,1,-1};

    for(int d = 0; d<4; d++){
        int nx = x + dx[d];
        int ny = y + dy[d];

        if(nx >=0 && nx < n && ny >=0 && ny < n && !visited[nx][ny]){
            visited[nx][ny] = true;
            search(nx,ny);
            visited[nx][ny] = false;
        }
    }
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    n = 3;
    visited.assign(n, vector<bool>(n,false));
    visited[0][0] = true;
    
    search(0,0);
    cout << "Number of paths for " << n << "x" << n <<": " << countPaths << endl;

    return 0;
}