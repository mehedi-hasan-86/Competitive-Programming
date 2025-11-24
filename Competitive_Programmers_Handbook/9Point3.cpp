#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const int N = 1e5+5;
int n;
vl tree;

void build(vi &a){
    tree.resize(2*n);

    for(int i=0; i<n; i++){
        tree[n+i] = a[i];
    }
    for(int i=n-1; i>=1; i--){
        tree[i] = tree[2*i] + tree[2*i+1];
    }
}

lli sum(int l , int r){
    l +=n;
    r +=n;
    lli s = 0;
    while(l<=r){
        if(l%2 ==1) s += tree[l++];
        if(r%2 == 0) s+= tree[r--];
        l /= 2;
        r /= 2;
    }
    return s;
}

void update(int k, int x){
    k +=n;
    tree[k] +=x;
    for( k/=2; k>=1; k/=2){
        tree[k] = tree[2*k] + tree[2*k +1];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    build(a);

    int q;
    cin >> q;
    while(q--){
        int type;
        cin >> type;
        if(type ==1){
            int l, r;
            cin >> l >> r;
            cout << sum(l,r) << endl;
        }else if(type == 2){
            int idx, val;
            cin >> idx >> val;
            update(idx, val);
        }
    }





    return 0;
}