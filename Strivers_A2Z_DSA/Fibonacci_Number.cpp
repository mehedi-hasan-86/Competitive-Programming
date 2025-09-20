#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

class Solution {
public:
    int fib(int n){
        if(n==0) return 0;
        if(n==1) return 1;
        // if(n== 0 || n == 1) return 1;
        return fib(n-1) + fib(n-2);
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    Solution sol;

    int n;
    cin >> n;

    cout << sol.fib(n) << endl;

    return 0;
}