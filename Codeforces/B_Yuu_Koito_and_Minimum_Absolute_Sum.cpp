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

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vl a(n);
        for(int i=0; i<n;i++){
            cin >> a[i];
        }

        if(a[0] == -1 && a[n-1]==-1){
            a[0] = a[n-1] = 0;
        }else if(a[0]==-1){
            a[0] = a[n-1];
        }else if(a[n-1]==-1){
            a[n-1] = a[0];
        }
        
        cout << abs(a[n-1]-a[0]) << endl;
        for(int i=0; i<n; i++){
            if(a[i]==-1){
                cout << 0 << " ";
            }else{
                cout << a[i] << " ";
            }
        }
        cout << endl;

    }



    return 0;
}


/*
*/