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


        for(int i=0; i<n-2; i++){
            if(s[i]=='1' && s[i+2]=='1'){
                s[i+1] = '1';
            }
        }

        string ss = s;
       

           for(int i=0; i<n-2; i++){
            if(s[i]=='1' && s[i+2]=='1'){
                s[i+1] = '0';
            }
        }
        cout << count(s.begin(), s.end(),'1')<< " ";
        cout << count(ss.begin(), ss.end(),'1') << endl;

    }

    return 0;
}