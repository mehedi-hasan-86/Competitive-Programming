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

    int x;
    cin >> x;

    int *p_x = &x;
    // int *p_x ;
    // p_x = &x;


    cout << *p_x << endl;

    return 0;
}