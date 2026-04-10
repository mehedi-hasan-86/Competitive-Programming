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
        for(int i=0; i<n; i++) cin >> a[i];
    
        // if(n<=2){
        //     cout << 0 << endl;
        //     continue;
        // }

        stack<int> s, t1;
        // s.push(a[0]);
        // t1.push(a[1]);

        int ans = 0;
        for(int i=0; i<n; i++){
            int x = s.empty() ? INT_MAX : s .top();
            int y = t1.empty() ? INT_MAX : t1.top();

            if(x>y){
                swap(x,y);
                swap(s,t1);
            }
            // if(s.top()>t1.top()){
            //     swap(s,t1);
            //     swap(s.top(), t1.top());
            // } 

            if(x>=a[i]){
                s.push(a[i]);
            }else if(y>=a[i]){
                t1.push(a[i]);
            }else{
                s.push(a[i]);
                ans++;
            }
        }
        cout << ans << endl;
    }


    return 0;
}