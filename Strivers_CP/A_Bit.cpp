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

    int n;
    cin >>n;
    int res = 0;
    while(n--){
        string s;
        cin >> s;

        if(s == "++X" ||  s== "X++"){
          res++;
        }else{
            res--;
        }
    }
    cout << res << endl;

    return 0;
}
