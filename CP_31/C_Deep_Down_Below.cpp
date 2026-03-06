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
        vector<pair<lli, lli>> cvs;

        for(int i=0; i<n; i++){
            int k;
            cin >> k;

            lli b = 0;
            for(int j=0; j<k; j++){
                lli a;
                cin >> a;
                b = max(b,a-j);
            }
            cvs.push_back({b,k});
        }
        sort(cvs.begin(), cvs.end());

        lli sum = 0;
        lli ans = 0;

        for(int i=0; i<cvs.size(); i++){
            lli b = cvs[i].first;
            lli k = cvs[i].second;

            ans = max(ans, b-sum+1);
            sum +=k;
        }
        cout << ans << endl;
    }

    return 0;
}