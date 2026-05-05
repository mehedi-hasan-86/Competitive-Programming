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

    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int sum = 0;
        vi d;
        for(int i=0; i<s.size(); i++){
            int x =s[i]-'0';
            sum += x;

            if(i==0) d.push_back(x - 1);
            else d.push_back(x);
        }
        sort(d.rbegin(), d.rend());

        int remv = 0;
        int cnt = 0;
        while(sum-remv>9){
            remv +=d[cnt++];
        }
        cout << cnt << endl;

    }

    return 0;
}