#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

vl getNthRow(int N){
    vl row;

    lli val = 1;
    row.push_back(val);
    for(int k=1; k<N; k++){
        val = val*(N-k)/k;
        row.push_back(val);
    }
    return row;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vl res = getNthRow(n);
    for(auto num : res){
        cout << num << " ";
    }
    cout << endl;


    return 0;
}