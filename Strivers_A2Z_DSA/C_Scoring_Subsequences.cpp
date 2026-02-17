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

        vi a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        for(int i=0; i<n; i++){
            int l = 1, r = i+1;

            while(l<=r){
                int m = (l+r)/2;

                if(a[i-m+1] >=m){
                    l = m+1;
                }else{
                    r = m-1;
                }
            }
            cout << r << " ";
        }
        cout << endl;


    }

    return 0;
}