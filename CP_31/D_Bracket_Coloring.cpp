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
        string s;
        cin >> n >> s;

        vi bal(n+1,0);
        for(int i=0; i<n; i++){
            if(s[i]=='(') bal[i+1] = bal[i]+1;
            else bal[i+1] = bal[i]-1;
        }
        if(bal[n] != 0){
            cout << -1 << endl;
            continue;
        }
        int min_bal = *min_element(bal.begin(), bal.end());
        int mx_bal = *max_element(bal.begin(), bal.end());

        if(min_bal==0 || mx_bal==0){
            cout << 1 << endl;
            for(int i=0; i<n; i++) cout << 1 << " ";
            cout << endl;
            continue;
        }

        vi color;
        int cur =0;
        while(cur<n){
            int w = (s[cur]=='('? 1 : 2);
            do{
                color.push_back(w);
                cur++;
            }while(bal[cur] != 0);
        }

        cout << 2 << endl;
        for(int i=0; i<n;i++){
            if(i) cout << " ";
            cout << color[i];
        }
        cout << endl;
    }

    return 0;
}