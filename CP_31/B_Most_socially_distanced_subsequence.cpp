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
        int n; cin >> n;
        vi a(n); for(int i=0; i<n; i++) cin >> a[i];

        int i = 0;
        vi res;
        while(i<n-1){
            int st = i;
            if(a[i]<a[i+1]){
                while(i+1 < n && a[i]<a[i+1]){
                    i++;
                }
                res.push_back(a[st]);
                res.push_back(a[i]);

            }else if(a[i]>a[i+1]){
                while(a[i]>a[i+1] && i+1<n){
                    i++;
                }
                res.push_back(a[st]);
                res.push_back(a[i]);
            }else{
                i++;
            }
        }

        vi ans;
        for(int i=0; i<res.size()-1; i++){
            if(res[i] != res[i+1]){
                ans.push_back(res[i]);
            }
        }
        ans.push_back(res.back());

        cout << ans.size() << endl;
        for(auto x : ans){
            cout << x << " ";
        }
        cout << endl;
    }


    return 0;
}