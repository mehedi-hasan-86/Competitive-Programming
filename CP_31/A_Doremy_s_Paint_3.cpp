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

        if(n==2){
            cout << "Yes" << endl;
            continue;
        }

        set<int> st(a.begin(), a.end());
        if(st.size()>2){
            cout <<"No" << endl;
            continue;
        }

        bool isC = false;
        sort(a.begin(), a.end());
        int cntL = count(a.begin(), a.end(), a[0]);
        int cntH = count(a.begin(), a.end(), a[n-1]);

        if(n%2==0){
           if(cntL==cntH || cntL==n){
            isC = true;
           }
        }else{
            if(cntL-1==cntH || cntL == cntH-1 || cntL==n){
                isC = true;
            }
        }

        if(isC){
            cout <<"Yes" << endl;
        }else{
            cout <<"No" << endl;
        }
    }

    return 0;
}