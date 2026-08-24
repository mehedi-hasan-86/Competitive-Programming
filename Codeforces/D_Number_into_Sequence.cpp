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
        lli n;
        cin >> n;
        lli x = n;

        vl factors;
        map<lli,int> freq;
        for(lli p=2; p*p <=n; p++){
            while(n%p==0){
                freq[p]++;
                factors.push_back(p);
                n /=p;
            }
        }
        if(n>1){
            freq[n]++;
            factors.push_back(n);
        }
        lli ele = -1;
        lli mxFreq = 0; 
        for(auto it : freq){
            if(it.second>mxFreq){
                mxFreq = it.second;
                ele = it.first;
            }
        }

        if(mxFreq == 0){
            cout << 1 << endl;
            cout << x << endl;
            continue;
        }
        if(mxFreq==1){
            cout << 1 << endl;
            cout << x << endl;
            continue;
        }

        cout << mxFreq << endl;
        lli rem = x;
        for(lli i=0; i<mxFreq-1; i++){
            cout << ele << " ";
            rem /=ele;
        }
        cout << rem << endl;
    }

    return 0;
}