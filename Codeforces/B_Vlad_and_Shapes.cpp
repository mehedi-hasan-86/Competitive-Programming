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
        vector<string> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vi x;
        for(int i=0; i<n; i++){
            int cnt = 0;
            for(int j=0; j<n; j++){
                if(a[i][j]=='1'){
                    cnt++;
                }
            }
            if(cnt){
                 x.push_back(cnt);
            }
           
        }
        sort(x.begin(), x.end());

        if(x[0]==x[x.size()-1]){
            cout << "SQUARE" << endl;
        }else{
            cout <<"TRIANGLE" << endl;
        }
    }

    return 0;
}