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
int n = 7;
int countPaths = 0;

bool visited[7][7];

void search(int x, int y, int steps) {

    if (x == n - 1 && y == n - 1) {
        if (steps == n * n) {
            countPaths++;
        }
        return;
    }
    if ((y == 0 || visited[x][y - 1]) &&
        (y == n - 1 || visited[x][y + 1]) &&
        x > 0 && x < n - 1 &&
        !visited[x - 1][y] &&
        !visited[x + 1][y]) {
        return;
    }

    if ((x == 0 || visited[x - 1][y]) &&
        (x == n - 1 || visited[x + 1][y]) &&
        y > 0 && y < n - 1 &&
        !visited[x][y - 1] &&
        !visited[x][y + 1]) {
        return;
    }

    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    for (int d = 0; d < 4; d++) {

        int nx = x + dx[d];
        int ny = y + dy[d];

        // Check valid and unvisited
        if (nx >= 0 && nx < n &&
            ny >= 0 && ny < n &&
            !visited[nx][ny]) {

            visited[nx][ny] = true;

            search(nx, ny, steps + 1);

            // Backtrack
            visited[nx][ny] = false;
        }
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    visited[0][0] = true;

    search(0, 0, 1);

    cout << "Number of paths for "
         << n << "x" << n
         << ": " << countPaths << '\n';

    return 0;
}