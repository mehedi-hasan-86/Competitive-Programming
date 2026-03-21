#include<bits/stdc++.h>
using namespace std;

#define lli long long
using vi = vector<int>;
using vl = vector<lli>;

/* ================= SQRT DECOMPOSITION ================= */

struct SqrtDecomposition {
    int n, block_size;
    vector<lli> a, block;

    SqrtDecomposition(vector<lli> &arr) {
        a = arr;
        n = a.size();
        block_size = sqrt(n) + 1;

        block.assign(block_size, 0);

        for (int i = 0; i < n; i++) {
            block[i / block_size] += a[i];
        }
    }

    void update(int i, lli val) {
        int b = i / block_size;
        block[b] -= a[i];
        a[i] = val;
        block[b] += a[i];
    }

    lli query(int l, int r) {
        lli sum = 0;
        int start_block = l / block_size;
        int end_block = r / block_size;

        if (start_block == end_block) {
            for (int i = l; i <= r; i++) sum += a[i];
        } else {
            for (int i = l; i < (start_block + 1) * block_size; i++)
                sum += a[i];

            for (int b = start_block + 1; b < end_block; b++)
                sum += block[b];

            for (int i = end_block * block_size; i <= r; i++)
                sum += a[i];
        }
        return sum;
    }
};

/* ================= MO'S ALGORITHM ================= */

struct Query {
    int l, r, idx;
};

int BLOCK;

bool cmp(Query a, Query b) {
    if (a.l / BLOCK != b.l / BLOCK)
        return a.l < b.l;
    return a.r < b.r;
}

vector<int> mos_algorithm(vector<int> &arr, vector<Query> &queries) {
    int n = arr.size();
    BLOCK = sqrt(n);

    sort(queries.begin(), queries.end(), cmp);

    vector<int> freq(1000005, 0);
    vector<int> ans(queries.size());

    int curL = 0, curR = -1;
    int dis = 0;

    auto add = [&](int x) {
        freq[x]++;
        if (freq[x] == 1) dis++;
    };

    auto remove = [&](int x) {
        freq[x]--;
        if (freq[x] == 0) dis--;
    };

    for (auto q : queries) {
        int L = q.l, R = q.r;

        while (curR < R) add(arr[++curR]);
        while (curR > R) remove(arr[curR--]);
        while (curL < L) remove(arr[curL++]);
        while (curL > L) add(arr[--curL]);

        ans[q.idx] = dis;
    }
    return ans;
}

/* ================= BATCH PROCESSING ================= */

struct BatchProcessing {
    int n;
    vector<pair<int,int>> black_cells;
    int batch_size;

    BatchProcessing(int n) {
        this->n = n;
        batch_size = sqrt(n) + 1;
    }

    int dist(pair<int,int> a, pair<int,int> b) {
        return abs(a.first - b.first) + abs(a.second - b.second);
    }

    int query(pair<int,int> cell) {
        int ans = INT_MAX;

        for (auto &b : black_cells) {
            ans = min(ans, dist(cell, b));
        }

        black_cells.push_back(cell);

        if ((int)black_cells.size() > batch_size) {
            black_cells.clear();
        }

        if (ans == INT_MAX) return -1;
        return ans;
    }
};

/* ================= MAIN ================= */

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // ===== SQRT DECOMPOSITION TEST =====
    vector<lli> arr = {1,2,3,4,5,6,7,8};
    SqrtDecomposition sd(arr);

    cout << sd.query(2,6) << "\n"; // sum
    sd.update(3,10);
    cout << sd.query(2,6) << "\n";

    // ===== MO'S ALGORITHM TEST =====
    vector<int> a = {1,2,1,3,4,2,3};
    vector<Query> queries = {
        {0,4,0},
        {1,3,1},
        {2,6,2}
    };

    vector<int> res = mos_algorithm(a, queries);
    for (auto x : res) cout << x << " ";
    cout << "\n";

    return 0;
}