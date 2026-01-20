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

        vector<lli> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        multiset<lli> last;

        for(lli x : a){
            auto it = last.find(x-1);
            if(it != last.end()){
                last.erase(it);
                last.insert(x);
            }else{
                last.insert(x);
            }
        }
        cout << last.size() << endl;
    }

    return 0;
}