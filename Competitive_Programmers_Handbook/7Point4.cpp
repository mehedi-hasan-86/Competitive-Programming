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

    vi w(n);
    int W  = 0;

    for(int i=0; i<n; i++){
        cin >> w[i];
        W +=w[i];
    }
    vector<bool> possible(W+1, false);
    possible[0] = true;

    for(int i=0; i<n; i++){
        for(int x = W; x>=0; x--){
            if(possible[x]){
                possible[x+w[i]] = true;
            }
        }
    }

    for(int x = 0; x<=W; x++){
        if(possible[x]) cout << x <<" ";
    }
    cout << endl;

    return 0;
}