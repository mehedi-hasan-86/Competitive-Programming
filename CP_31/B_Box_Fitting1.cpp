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
        lli w;
        cin >> n >> w;

        multiset<lli>s;

        for(int i=0; i<n; i++){
            lli x;
            cin >> x;
            s.insert(x);
        }

        int h = 1;
        lli space = w;
        while(!s.empty()){
            auto it = s.upper_bound(space);

            if(it == s.begin()){
                h++;
                space = w;
            }else{
                it--;
                space -= *it;
                s.erase(it);
            }
        }
        cout << h << endl;
    }

    return 0;
}