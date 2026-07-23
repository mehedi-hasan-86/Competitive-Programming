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
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int evenCNt = 0, oddCnt = 0;
        for(int i=0; i<n; i++){
            if(a[i]%2==0){
                evenCNt++;
            }else{
                oddCnt++;
            }
        }
        if(evenCNt==0 || oddCnt==0){
            for(int i=0; i<n; i++){
                cout <<a[i] << " ";
            }
        }else{
            sort(a.begin(), a.end());
             for(int i=0; i<n; i++){
                cout <<a[i] << " ";
            }
        }
        cout << endl;

    }


    return 0;
}