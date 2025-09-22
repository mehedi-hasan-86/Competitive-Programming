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

    int x,y,z;
    cin >> x >> y >> z;

    vector<int> v({x,y,z});
    sort(v.begin(), v.end());

    cout << (v[1]-v[0]) + (v[2]-v[1]) << endl;


    return 0;
}