#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n,k,p,m;
        cin >> n >> k >> p >> m;

        vi a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        deque<int> dq;
        for(int i=0; i<n; i++) dq.push_back(i);
        int eg = 0, ans = 0, win = p-1;
        while(true){
        int pos = -1;
        int ss = min(k, (int)dq.size());
        for(int i=0; i<ss; i++){
        if(dq[i]==win){pos = i; break; }
        }
        
        if(pos==-1){
            int bt = 0;
            for(int i=0; i<ss; i++){
                if(a[dq[i]]< a[dq[bt]]) bt = i;
            }
            pos = bt;
        }
            int crd = dq[pos];
            if(eg + a[crd]>m) break;

            eg +=a[crd];
            dq.erase(dq.begin()+pos);
            dq.push_back(crd);
            if(crd == win) ans++;
        }
        cout << ans << endl;
    }

    return 0;
}