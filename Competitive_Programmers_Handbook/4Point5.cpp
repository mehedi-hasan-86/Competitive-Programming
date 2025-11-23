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

    bitset<10> s;
    s[1]=1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;
    cout << s[4] << endl; // 1
    cout << s[5]  << endl; // 0
    cout << s << endl;

    bitset<10> ss(string("00100111010")); // from right to left
    cout << ss[4] << endl; // 1
    cout << ss[5] << endl; // 0
    cout << ss << endl;

    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));
    cout << (a&b) << endl;
    cout << (a|b) << endl;
    cout << (a^b) << endl;

    return 0;
}