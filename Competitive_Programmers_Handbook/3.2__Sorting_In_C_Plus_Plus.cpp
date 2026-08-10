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

struct P{
    int x,y;
    bool operator < (const P &p)  const{
        if(x != p.x) return x < p.x; // sort by x first
        return y < p.y; // then by y
    }
};

bool cmp(string a, string b){
        if(a.size() != b.size()){
            return a.size() < b.size(); // Shorter first
        }
        return a<b; // Aplhabetical
}

    // Custom comparator
bool desc(int a, int b){
        return a>b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vi v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    // Ascending order
    sort(v.begin(), v.end());

    // Descending Order
    sort(v.rbegin(), v.rend());

    int m  =7;
    int a[] = {1,2,3,5,4,7,6};

    sort(a, a+n);
    sort(a+2, a+5); // sorts elements at positions 2,3,4

    string s = "monkey";
    sort(s.begin(), s.end());

    vector<string> words = {"banna", "apple", "cherry"};
    sort(words.begin(), words.end());

    vector<pair<int,int>> vp;
    vp.push_back({1, 5});
    vp.push_back({2, 3});
    vp.push_back({1, 2});

    sort(vp.begin(), vp.end());
    // Result: (1,2), (1,5), (2,3)
    // Sorts by first, then second


    vector<tuple<int,int,int>> vt;
    vt.push_back({2, 1, 4});
    vt.push_back({1, 5, 3});
    vt.push_back({2, 1, 3});

    sort(vt.begin(), vt.end());

    // Result: (1,5,3), (2,1,3), (2,1,4)
    // Sorts by first, then second, then third


    vector<P> points = {{1,5}, {2,3}, {1,2}};
    sort(points.begin(), points.end());



    sort(words.begin(), words.end(), cmp);


    // Using built-in greater
    sort(v.begin(), v.end(), greater<int>());


    sort(v.begin(), v.end(), desc);







    return 0;
}