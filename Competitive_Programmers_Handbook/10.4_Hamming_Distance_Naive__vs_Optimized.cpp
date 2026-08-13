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
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e6;

int hammingNaive(string a, string b){
    int d = 0;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) d++;
    }
    return d;
}

int hammingOptimized(int a, int b){
    return __builtin_popcount(a^b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s1 = "01101";
    string s2 = "11001";

    int a = stoi(s1, nullptr, 2);
    int b = stoi(s2, nullptr, 2);

    cout << "s1 = " << s1 << endl;
    cout <<"s2 = " << s2 << endl;
    cout <<"Naive Hamming: " << hammingNaive(s1,s2) << endl;
    cout <<"Optimized Hamming: " << hammingOptimized(a,b) << endl;

    return 0;
}