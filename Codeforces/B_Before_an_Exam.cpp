#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int d,sT;
    cin >> d >> sT;

    vector<pair<int,int>> p;
    while(d--){
        int mnT, mxT;
        cin >> mnT >> mxT;
        p.push_back({mnT, mxT});
    }

    int mnTotal = 0;
    int mxTotal = 00;
    for(int i=0; i<p.size(); i++){
        mnTotal += p[i].first;
        mxTotal += p[i].second;
    }

    if(sT<mnTotal || sT > mxTotal){
        cout << "NO" << endl;
        return 0;
    }

    vi res;
    for(int i=0; i<p.size(); i++){
        res.push_back(p[i].first);
    }

    int sum = accumulate(res.begin(), res.end(),0);
    int remSum = sT-sum;

    for(int i=0; i<p.size(); i++){
        int extra = p[i].second - p[i].first;
        if(remSum >= (extra)){
            res[i] += extra;
            remSum -= extra;
        }else if(remSum < extra){
            res[i] += remSum;
            remSum  = 0;
        }
    }
    cout <<"YES" << endl;
    for(auto x : res){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}