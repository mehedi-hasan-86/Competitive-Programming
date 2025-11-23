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

    vi permutation;
    for(int i=0; i<n; i++){
        permutation.push_back(i);
    }

    do{
        for(int x : permutation) cout << x << " ";
        cout << endl;
    }while(next_permutation(permutation.begin(), permutation.end()));

    return 0;
}