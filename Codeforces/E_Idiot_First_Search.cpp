#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

vector<int> leftChild, rightChild;
vector<long long> dp, tau;

// Compute dp[v] = total moves Bob does starting at v to return to parent
long long dfs(int v) {
    if (leftChild[v] == 0 && rightChild[v] == 0) return 1; // leaf
    long long res = 0;
    if (leftChild[v] != 0) res = (res + dfs(leftChild[v])) % MOD;
    if (rightChild[v] != 0) res = (res + dfs(rightChild[v])) % MOD;
    res = (res + 3) % MOD; // moves: left, right, move to parent
    dp[v] = res;
    return res;
}

// Compute tau[v] = total time to reach root starting at v
void dfs2(int v, long long t) {
    tau[v] = t % MOD;
    if (leftChild[v] != 0) dfs2(leftChild[v], (t + dp[leftChild[v]]) % MOD);
    if (rightChild[v] != 0) dfs2(rightChild[v], (t + dp[rightChild[v]]) % MOD);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        leftChild.assign(n + 1, 0);
        rightChild.assign(n + 1, 0);
        dp.assign(n + 1, 0);
        tau.assign(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            int l, r;
            cin >> l >> r;
            leftChild[i] = l;
            rightChild[i] = r;
        }

        dfs(0);       // compute dp
        dfs2(0, 0);   // compute tau

        for (int i = 1; i <= n; i++) {
            cout << tau[i] % MOD << " ";
        }
        cout << "\n";
    }

    return 0;
}
