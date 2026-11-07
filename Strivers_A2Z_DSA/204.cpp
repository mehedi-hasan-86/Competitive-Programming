#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'

int cntPrimes(int n){
    if(n<=2) return 0;

    vector<bool> isPrime(n,true);
    isPrime[0] = isPrime[1] = false;

    for(int i=2; i*i < n ; i++){
        if(isPrime[i]){
            for(int j = i*i; j<n; j+=i){
                isPrime[j] = false;
            }
        }
    }
    int cnt = 0;
    for(int i=2; i<n; i++){
        if(isPrime[i]){
            cnt++;
        }
    }
    return cnt;

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << cntPrimes(n) << endl;

    return 0;
}