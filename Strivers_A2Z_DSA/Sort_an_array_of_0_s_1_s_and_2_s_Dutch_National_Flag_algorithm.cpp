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

    int l=0, m = 0, h = n-1;

    while(m<=h){
     
        if(a[m]==0){
            swap(a[l], a[m]);
            m++;
            l++;
        }else if(a[m]==1){
            m++;
        }else{
            swap(a[m], a[h]);
            h--;
        }
    }
    for(int x : a){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}