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
        int n;
        cin >> n;

        vi p(n), a(n);
        for(int i=0; i<n; i++){
            cin >> p[i];
        }
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        unordered_map<int,int> pos;
        for(int i=0; i<n; i++){
            pos[p[i]] = i;
        }

        bool isC = true;
        int lst = 0;
        for(int i=0; i<n; i++){
            int idx = pos[a[i]];
            if(idx < lst){
               isC = false;
               break;
            }
            lst = idx;
        }

        if(isC){
            cout <<"YES" << endl;
        }else{
            cout <<"NO" << endl;
        }




    }

    return 0;
}