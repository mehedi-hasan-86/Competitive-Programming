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
        int n,k,x;
        cin >> n >> k >> x;

        if(x!=1){
            cout << "YES" << endl;
            cout << n << endl;
            for(int i=0; i<n; i++){
                cout << 1 << " ";
            }
            cout << endl;
            continue;
        }

        if(k==1){
            cout <<"NO" << endl;
            continue;
        }
        if(k==2){
            if(n%2){
                cout <<"NO" << endl;
                continue;
            }else{
                cout <<"YES" << endl;
                cout << n/2 << endl;
                for(int i=0; i<n/2; i++){
                    cout << 2 << " ";
                }
                cout << endl;
                continue;
            }
        }

        if(n%2){
            cout <<"YES" << endl;
           cout << n/2 << endl;
           cout <<3 << " ";
           for(int i=0; i<n/2-1; i++){
            cout << 2 << " ";
           } 
           cout << endl;
        }else{
            cout <<"YES" << endl;
            cout << n/2 << endl;
            for(int i=0; i<n/2; i++){
                cout << 2 << " ";
            }
            cout << endl;
        }
    }

    return 0;
}