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

    int j=-1;
    for(int i=0; i<n; i++){
        if(a[i] ==0){
            j = i;
            break;
        }
    }
    for(int i=j+1; i<n; i++){
        if(a[i] != 0){
            swap(a[i], a[j]);
            j++;
        }
    }
    for(int x : a){
        cout << x << " ";
    }
    cout << endl;


    return 0;
}