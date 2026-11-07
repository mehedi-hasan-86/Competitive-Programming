#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> divisors;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            divisors.push_back(i);
        }
    }
    for(auto x : divisors){
        cout << x << " ";
    }
    cout <<endl;


    

    return 0;
}