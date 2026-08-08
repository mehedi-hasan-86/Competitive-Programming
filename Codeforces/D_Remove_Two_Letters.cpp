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
    cin >>t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int cnt = 0;
        for(int i=0; i<n-2; i++){
            if(s[i]==s[i+2]){
                cnt++;
            }
        }
        cout << n-cnt-1 << endl;
    }

    return 0;
}