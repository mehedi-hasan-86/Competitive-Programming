#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vi b(n),a;
        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        int x = 0;
        a.push_back(b[0]);
        for(int i=0; i<n-1;i++ ){
            if(b[i]<=b[i+1]){
                a.push_back(b[i+1]);
            }else{
                a.push_back(b[i+1]);
                a.push_back(b[i+1]); 
            }
        }
        cout << a.size() << endl;
        for(auto x : a){
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}