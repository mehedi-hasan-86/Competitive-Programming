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

    map<string,int> m;
    m["monkey"] =  4;
    m["banna"] = 3;
    m["harpsichord"] = 9;
    cout << m["banna"] << endl;

    cout << m["aybabtu"] << endl;

    if(m.count("aybabtu")){
        cout <<"Exist" << endl;
    }

    for(auto x : m){
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}