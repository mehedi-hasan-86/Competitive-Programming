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
        lli n;
        cin >> n;

        lli m = n*1LL*(n-1)/2;
        vl b(m);
        for(int i=0; i<m; i++){
            cin >> b[i];
        }
        sort(b.begin(), b.end());

       
        vl a;
        lli cnt = n-1;
        for(int i=0; i<m;){
            a.push_back(b[i]);
            i +=cnt;
            cnt--;
        }
        a.push_back(*max_element(b.begin(), b.end()));

        for(auto x : a){
            cout << x << " ";
        }
        cout << endl;

    }

    return 0;
}