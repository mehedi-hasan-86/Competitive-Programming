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

    int i = n-2;
    while(i>0 && a[i]>=a[i+1]){
        i--;
    }
    if(i>=0){
        int j = n-1;
        while(a[j] <= a[i]){
            j--;
        }
        swap(a[i], a[j]);
    }
    reverse(a.begin()+i+1, a.end());

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}