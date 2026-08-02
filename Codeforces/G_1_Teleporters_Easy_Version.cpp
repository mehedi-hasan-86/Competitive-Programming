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
    cin  >> t;

    while(t--){
        int n;
        lli c;
        cin >> n >> c;

        vl a(n+1);
        for(int i=1; i<=n; i++ ){
            cin >> a[i];
        }
        vl arr;
        for(int i=1; i<=n; i++){
            arr.push_back(a[i]+i);
        }
        sort(arr.begin(), arr.end());

        int cnt = 0;
        for(int i=0; i<n; i++){
            if(c>=arr[i]){
                c -=arr[i];
                cnt++;
            }
        }
        cout << cnt << endl;

    }

    return 0;
}