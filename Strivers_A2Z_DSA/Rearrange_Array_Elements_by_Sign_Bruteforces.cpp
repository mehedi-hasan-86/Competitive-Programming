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

    vi a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    vi pos, neg;
    for(int i=0; i<n; i++){
        if(a[i]>0){
            pos.push_back(a[i]);
        }else{
            neg.push_back(a[i]);
        }
    }

    for(int i=0; i<n/2; i++){
       a[2*i] = pos[i];
       a[2*i+1] = neg[i]; 
    }

    for(int x : a){
        cout << x << " ";
    }
    cout << endl;



    return 0;
}