#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void leftRotate(vi &a, int n, int d){
    d = d%n;

    vi temp(d);
    for(int i=0; i<d; i++){
        temp[i] = a[i];
    }

    for(int i=d; i<n; i++){
        a[i-d] = a[i];
    }

    for(int i=n-d; i<n; i++){
        a[i] = temp[i-(n-d)];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    
    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int d;
    cin >> d;
    
    leftRotate(a, n, d);
    for(int i : a){
        cout << i << " ";
    }
    cout << endl;


    return 0;
}