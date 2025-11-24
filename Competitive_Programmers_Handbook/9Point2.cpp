#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const int N = 100005;
int tree[N];
int n;

void add(int k, int x){
    while(k<=n){
        tree[k] +=x;
        k += k& -k;
    }
}
int sum(int k){
    int s = 0;
    while(k>=1){
        s += tree[k];
        k -= k& -k;
    }
    return s;
}

int rangeSum(int a, int b){
    return sum(b) - sum(a-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    vi a(n+1);
    for(int i=1; i<=n; i++){
        cin >> a[i];
        add(i,a[i]);
    }

    int q;
    cin >> q;
    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            int l,r;
            cin >> l >> r;
            cout << rangeSum(l,r) << endl;
        }else if(type == 2){
        int idx , val;
        cin >> idx >> val;
        add(idx, val);
    }
    }

    return 0;
}