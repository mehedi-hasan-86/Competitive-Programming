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

        vi arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];

        vi a, b,c,d;
        for(int i=0; i<n; i++){
            int  x = arr[i];
            if(x%6==0) a.push_back(x);
            else if(x%2==0) b.push_back(x);
            else if(x%3==0) c.push_back(x);
            else d.push_back(x);
        }

        vector<int> ans;
        for(auto it : a) ans.push_back(it);
        for(auto it : b) ans.push_back(it);
        for(auto it : d) ans.push_back(it);
        for(auto it : c) ans.push_back(it);

        for(int i=0; i<n; i++) cout << ans[i] << " ";
        cout << endl;



        
    }

    return 0;
}