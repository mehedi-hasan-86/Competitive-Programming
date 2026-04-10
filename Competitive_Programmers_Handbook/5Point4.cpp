#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const int N  = 7;
int totalPaths = 0;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

bool visited[N][N];

bool valid(int x, int y){
    return x>=0 && x<N && y>=0 && y<N && !visited[x][y];
}

bool causesSplit(int x, int y){
    int freeNeighbors = 0;
    for(int dir = 0; dir<4; dir++){
        int nx = x+dx[dir], ny = y+dy[dir];

        if(valid(nx, ny)) freeNeighbors++;
    }
    return freeNeighbors==0;
}

void search(int x, int y, int visitedCount){
    if(x==N-1 && y==N-1){
        if(visitedCount == N*N) totalPaths++;
        return;
    }

    for(int dir = 0; dir<4; dir++){
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(!valid(nx, ny)) continue;

        if(causesSplit(nx, ny)) continue;

        visited[nx][ny] = true;
        search(nx, ny, visitedCount+1);
        visited[nx][ny] = false;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    visited[0][0] = true;
    search(1,0,1);
    cout << totalPaths*2 << endl;

    return 0;
}