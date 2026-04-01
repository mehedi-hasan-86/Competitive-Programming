#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

bool isC(lli st, vl a, lli y){
    unordered_set<lli>us;
    us.insert(st);

    for(lli x:a){
        unordered_set<lli> nxt;
        for(lli d : us){
            nxt.insert(d+x);
            nxt.insert(d^x);
        }
        us = nxt;
    }
    return us.count(y);

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n;
        lli x,y;
        cin >> n >> x >> y;
        vl a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        if(isC(x,a,y)) cout <<"Alice";
        else cout << "Bob";
        cout << endl;
    }

    return 0;
}