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

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int mxReach = 0;
    bool isC = true;
    for(int i=0; i<n; i++){
        if(i>mxReach){
            isC = false;
        }
        mxReach = max(mxReach, i+a[i]);
    }
    if(isC){
        cout << "True" << endl;
    }else{
        cout <<"False" << endl;
    }

    

    return 0;
}