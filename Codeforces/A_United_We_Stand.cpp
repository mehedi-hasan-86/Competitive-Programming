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

        vi a(n);
        for(int i=0; i<n; i++){
            cin >>a[i];
        }
        vi b,c;
        sort(a.begin(), a.end());
        bool isC = true;
        int y = a[0];
        for(int i=1; i<n; i++){
            if(y != a[i]){
                isC = false;
                break;
            }
        }

        if(isC){
            cout << -1 << endl;
            continue;
        }

        int x = a[n-1];
        for(int i=0; i<n; i++){
            if(a[i]==x){
                c.push_back(x);
            }else{
                b.push_back(a[i]);
            }
        }
        cout << b.size() << " " << c.size() << endl;
        for(auto x : b){
            cout << x << " ";
        }
        cout << endl;
        for(auto x : c){
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}