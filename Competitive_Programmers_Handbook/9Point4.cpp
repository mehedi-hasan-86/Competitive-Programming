#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

struct BIT{
    int n;
    vector<lli> tree;

    BIT(int size){
        n = size+2;
        tree.assign(n,0);
    }

    void add(int idx, lli x){
        while(idx <n){
            tree[idx] += x;
            idx +=idx & -idx;
        }
    }

    lli sum(int idx){
        lli s = 0;
        while(idx>0){
            s += tree[idx];
            idx -=idx & -idx;
        }
        return s;
    }

    void range_add(int l, int r, lli x){
        add(l,x);
        add(r+1, -x);
    }
    lli point_query(int idx){
        return  sum(idx);
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,q;
    cin >> n;
    vl a(n);
    set<lli> idx_set;

    for(int i=0; i<n; i++){
        cin >> a[i];
        idx_set.insert(i);
    }

    cin >> q;
    vector<pair<int, tuple<int, int , lli>>> queries(q);

    for(int i=0; i<q; i++){
        int type;
        cin >> type;
        if(type == 1){
            int idx;
            cin >> idx;
            queries[i] = {type, {idx, 0,0}};
            idx_set.insert(idx);
        }else{
            int l, r;
            lli x;
            cin >> l >> r >> x;
            queries[i] = {type, {l,r,x}};
            idx_set.insert(l);
            idx_set.insert(r);
        }
    }

    map<lli, int> compress;
    int id = 1;
    for(lli x : idx_set) compress[x] = id++;

    BIT bit(id+2);
    for(int i=0; i<n; i++){
        int idx = compress[i];
        bit.range_add(idx, idx, a[i]);
    }

    for(auto &qry :   queries){
        int type = qry.first;
        int l = get<0> (qry.second);
        int r = get<1> (qry.second);
        lli x = get<2> (qry.second);

        if(type ==1){
            int idx = compress[l];
            cout << bit.point_query(idx) << endl;
        }else{
            int l_idx = compress[l];
            int r_idx = compress[r];
            bit.range_add(l_idx, r_idx,x);
        }
    }

    return 0;
}