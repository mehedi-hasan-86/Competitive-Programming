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

        vi a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int x = INT_MAX;
        int y = INT_MAX;

        int ans = 0;
        vi s,t;
        for(int i=0; i<n; i++){
            int x = s.empty() ? INT_MAX: s.back();
            int y = t.empty() ? INT_MAX : t.back();
            if(x>y){
              swap(x,y);
              swap(s,t);
            } 

            if(x>=a[i]){
                x = a[i];
                s.push_back(a[i]);
            }else if(y>=a[i]){
                y = a[i];
                t.push_back(a[i]);
            }else{
                ans++;
                x = a[i];
                s.push_back(a[i]);
            }
        }

        for(int i=0; i<s.size(); i++){
            cout << s[i] << " ";
        }
        cout << endl;

        for(auto x : t){
            cout << x << " ";
        }
        cout << endl;

        cout << endl;

        // cout << ans << endl;
    }



    return 0;
}