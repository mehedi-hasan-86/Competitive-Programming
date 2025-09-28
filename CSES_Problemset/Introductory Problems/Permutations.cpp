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

    if(n==2 || n==3){
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    for(int i=1; i<=n; i++){
        if(i%2==0){
            cout << i << " ";
        }
    }
    for(int i=1; i<=n; i++){
        if(i%2==1){
            cout << i << " ";
        }
    }
    cout << endl;


    return 0;
}