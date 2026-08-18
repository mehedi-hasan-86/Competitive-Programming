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

    int n;
    cin >> n;

    list<string> cs;
    unordered_map<string, list<string>::iterator> pos;

    while(n--){
        string name;
        cin >> name;

        if(pos.find(name)==pos.end()){
            cs.push_front(name);
            pos[name] = cs.begin();
        }else{
            cs.erase(pos[name]);
            cs.push_front(name);
            pos[name] = cs.begin();
        }
    }

    for(auto name : cs){
        cout << name << endl;
    }

    return 0;
}