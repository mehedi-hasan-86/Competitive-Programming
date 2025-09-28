//need to solve next time 
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

    int n;
    cin >> n;

    int total = 1<<n;
    for(int i=0; i<total; i++){
        int gray = i^(i>>1);
        
        cout <<bitset<16>(gray).to_string().substr(16-n) << endl;
     
    }

    return 0;
}