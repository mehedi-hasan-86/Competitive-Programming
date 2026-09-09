#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
#define endl '\n'
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vl;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e6;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vl b(n);
        for(int i=0; i<n; i++) cin >> b[i];

        map<lli,lli> freq;
        for(lli x : b){
            freq[x]++;
        }
    //    for (auto p : freq) {
    //    cout << p.first << " -> " << p.second << " ";
    //   }
    //   cout << endl << endl;

        vl s;
        for(auto x : freq){
            s.push_back(x.first);
        }
        // for(auto x : s){
        //     cout << x << " ";
        // }
        // cout << endl;
        if(s[0] != 0){
            cout << -1 << endl;
            continue;
        }

        int m = s.size();
        vl v(m);
        

        bool isC = true;
        for(int i=0; i<m-1; i++){
            lli diff  = s[i+1] - s[i];
            int cnt = freq[s[i]];

            if(diff % cnt != 0){
                isC = false;
                break;
            }

            v[i] = diff/cnt;

            if(i>0 && v[i]<=v[i-1]){
                isC = false;
                break;
            }
        }

        if(!isC){
            cout << -1 << endl;
            continue;
        }
        if(m==1){
            v[0] = 1;
        }else{
            v[m-1] = v[m-2] +1;
        }

        for(lli x : b){
            int pos = lower_bound(s.begin(), s.end(),x)-s.begin();
            cout << v[pos] << " ";
        }
        cout << endl;


    }

    

    return 0;
}