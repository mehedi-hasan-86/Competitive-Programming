#include <bits/stdc++.h>
using namespace std;
#define lli long long int

// ================= Standard Segment Tree =================
struct SegTree {
    int n;
    vector<lli> tree;

    SegTree(int n) : n(n) {
        tree.assign(4 * n, 0);
    }

    void build(vector<int> &arr, int k, int l, int r) {
        if (l == r) {
            tree[k] = arr[l];
            return;
        }
        int mid = (l + r) / 2;
        build(arr, 2 * k, l, mid);
        build(arr, 2 * k + 1, mid + 1, r);
        tree[k] = tree[2 * k] + tree[2 * k + 1];
    }

    lli query(int a, int b, int k, int l, int r) {
        if (b < l || a > r) return 0;
        if (a <= l && r <= b) return tree[k];
        int mid = (l + r) / 2;
        return query(a, b, 2 * k, l, mid) + query(a, b, 2 * k + 1, mid + 1, r);
    }

    void update(int pos, int val, int k, int l, int r) {
        if (l == r) {
            tree[k] = val;
            return;
        }
        int mid = (l + r) / 2;
        if (pos <= mid) update(pos, val, 2 * k, l, mid);
        else update(pos, val, 2 * k + 1, mid + 1, r);
        tree[k] = tree[2 * k] + tree[2 * k + 1];
    }
};

// ================= Lazy Segment Tree =================
struct LazySegTree {
    int n;
    vector<lli> tree, lazy;

    LazySegTree(int n) : n(n) {
        tree.assign(4 * n, 0);
        lazy.assign(4 * n, 0);
    }

    void push(int k, int l, int r) {
        if (lazy[k] != 0) {
            tree[k] += (r - l + 1) * lazy[k];
            if (l != r) {
                lazy[2 * k] += lazy[k];
                lazy[2 * k + 1] += lazy[k];
            }
            lazy[k] = 0;
        }
    }

    void update(int a, int b, lli val, int k, int l, int r) {
        push(k, l, r);
        if (b < l || a > r) return;
        if (a <= l && r <= b) {
            lazy[k] += val;
            push(k, l, r);
            return;
        }
        int mid = (l + r) / 2;
        update(a, b, val, 2 * k, l, mid);
        update(a, b, val, 2 * k + 1, mid + 1, r);
        tree[k] = tree[2 * k] + tree[2 * k + 1];
    }

    lli query(int a, int b, int k, int l, int r) {
        push(k, l, r);
        if (b < l || a > r) return 0;
        if (a <= l && r <= b) return tree[k];
        int mid = (l + r) / 2;
        return query(a, b, 2 * k, l, mid) + query(a, b, 2 * k + 1, mid + 1, r);
    }
};

// ================= Dynamic (Sparse) Segment Tree =================
struct DynamicNode {
    lli val;
    DynamicNode *left, *right;
    DynamicNode() { val = 0; left = right = nullptr; }
};

void dyn_update(DynamicNode* &node, int l, int r, int pos, lli val) {
    if (!node) node = new DynamicNode();
    if (l == r) {
        node->val += val;
        return;
    }
    int mid = (l + r) / 2;
    if (pos <= mid) dyn_update(node->left, l, mid, pos, val);
    else dyn_update(node->right, mid + 1, r, pos, val);
    lli leftVal = node->left ? node->left->val : 0;
    lli rightVal = node->right ? node->right->val : 0;
    node->val = leftVal + rightVal;
}

lli dyn_query(DynamicNode* node, int l, int r, int a, int b) {
    if (!node || b < l || a > r) return 0;
    if (a <= l && r <= b) return node->val;
    int mid = (l + r) / 2;
    return dyn_query(node->left, l, mid, a, b) + dyn_query(node->right, mid + 1, r, a, b);
}

// ================= Persistent Segment Tree =================
struct PSTNode {
    lli val;
    PSTNode *left, *right;
    PSTNode(lli v = 0) { val = v; left = right = nullptr; }
};

PSTNode* build_pst(int l, int r) {
    PSTNode* node = new PSTNode();
    if (l == r) return node;
    int mid = (l + r) / 2;
    node->left = build_pst(l, mid);
    node->right = build_pst(mid + 1, r);
    return node;
}

PSTNode* update_pst(PSTNode* prev, int l, int r, int pos, lli val) {
    PSTNode* cur = new PSTNode();
    if (l == r) {
        cur->val = prev->val + val;
        return cur;
    }
    int mid = (l + r) / 2;
    if (pos <= mid) {
        cur->left = update_pst(prev->left, l, mid, pos, val);
        cur->right = prev->right;
    } else {
        cur->left = prev->left;
        cur->right = update_pst(prev->right, mid + 1, r, pos, val);
    }
    cur->val = (cur->left ? cur->left->val : 0) + (cur->right ? cur->right->val : 0);
    return cur;
}

lli query_pst(PSTNode* node, int l, int r, int a, int b) {
    if (!node || b < l || a > r) return 0;
    if (a <= l && r <= b) return node->val;
    int mid = (l + r) / 2;
    return query_pst(node->left, l, mid, a, b) + query_pst(node->right, mid + 1, r, a, b);
}

// ================= Main Function =================
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Example: Simple Segment Tree
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    SegTree st(n);
    st.build(arr, 1, 0, n - 1);

    cout << "Sum [0,n-1] Standard SegTree: " << st.query(0, n - 1, 1, 0, n - 1) << "\n";

    LazySegTree lst(n);
    for (int i = 0; i < n; i++) lst.update(i, i, arr[i], 1, 0, n - 1); // initialize
    cout << "Sum [0,n-1] LazySegTree: " << lst.query(0, n - 1, 1, 0, n - 1) << "\n";

    DynamicNode* root = nullptr;
    for (int i = 0; i < n; i++) dyn_update(root, 0, n - 1, i, arr[i]);
    cout << "Sum [0,n-1] Dynamic SegTree: " << dyn_query(root, 0, n - 1, 0, n - 1) << "\n";

    PSTNode* pst_root = build_pst(0, n - 1);
    PSTNode* new_root = pst_root;
    for (int i = 0; i < n; i++) new_root = update_pst(new_root, 0, n - 1, i, arr[i]);
    cout << "Sum [0,n-1] Persistent SegTree: " << query_pst(new_root, 0, n - 1, 0, n - 1) << "\n";

    return 0;
}