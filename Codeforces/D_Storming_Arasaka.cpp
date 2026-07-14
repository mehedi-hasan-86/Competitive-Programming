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
        lli n;
        cin >> n;

        int tmp = n;

        int m = 0;
        int A = 0;
        for(lli i=2; i*i<=tmp; i++){
            if(tmp%i==0){
                m++;
            while(tmp%i==0){
                tmp /=i;
                A++;
            }
         }
        }
        if(tmp>1){
            m++; A++;
        }
    cout << A+m-1 << endl;

    }
    return 0;
}