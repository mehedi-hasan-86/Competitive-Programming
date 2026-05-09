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

        vi w,x,y,z;
        for(int i=0; i<n; i++){
            int b = a[i];
            if(b%6==0) w.push_back(b);
            else if(b%2==0) x.push_back(b);
            else if(b%3==0) y.push_back(b);
            else z.push_back(b);
        }

        for(auto it : w) cout << it << " ";
        for(auto it : x) cout << it << " ";
        for(auto it : z) cout << it <<  " ";
        for(auto it : y) cout << it << " ";

        cout << endl;
    }

    return 0;
}