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

bool isSubset(vl A, vl B) {
    int i = 0, j = 0;
    while (i < A.size() && j < B.size()){
        if (A[i] == B[j]) {
            i++;
            j++;
        }
        else if(A[i] > B[j]){
            j++;
        }
        else{
            return false;
        }
    }

    return i == A.size();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;


    while(t--){
        int n;
        cin >> n;

        vl a(n), b(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        int m;
        cin >>  m;
        vl d(m);
        for(int i=0; i<m; i++) cin >> d[i];


        bool find = count(b.begin(), b.end(),d[m-1]);
        // cout << find << endl;
        

        vl c;
        for(int i=0; i<n; i++){
            if(a[i] != b[i]){
                c.push_back(b[i]);
            }
        }

        // for(auto x : c){
        //     cout << x << " ";
        // }
        // cout << endl;

        // if(c.size()==0 && find){
        //     cout << "YES" << endl;
        //     continue;
        // }
        sort(c.begin(), c.end());
        sort(d.begin(), d.end());
        bool isC = isSubset(c,d);

        if(isC && find){
            cout <<"YES" << endl;
        }else{
            cout <<"NO" << endl;
        }


    }
    return 0;
}