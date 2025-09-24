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

        int multi = 1;
        vi res;
        while(n){
            int d = n%10;
            d *=multi;
            if(d!=0){
                res.push_back(d);
            }
            multi *=10;
            n /=10;
        }
        cout << res.size() << endl;
        for(auto i : res){
            cout <<  i << " ";
        }
        cout << endl;
    }

    return 0;
}
