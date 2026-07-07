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
        int n,d;
        cin >> n >> d;
        string s;
        cin >> s;

        int idx = n;
        for(int i=0; i<n; i++){
            if(s[i]-'0' < d){
                idx = i;
                break;
            }
        }
        string str1 = s.substr(0,idx);
        string str2 = s.substr(idx);
        cout << str1 << d << str2 << endl;
    }

    return 0;
}