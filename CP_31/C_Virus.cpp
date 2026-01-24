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
        lli n;
        int m;
        cin >> n >> m;

        vl infected(m);
        for(int i=0; i<m; i++) cin >> infected[i];

        sort(infected.begin(), infected.end());

        vl gaps;
        for(int i=1; i<m; i++){
            lli gap = infected[i]-infected[i-1]-1;
            if(gap>0) gaps.push_back(gap);
        }
        lli circular_gap = infected[0]-infected[m-1]-1+n;
        if(circular_gap>0) gaps.push_back(circular_gap);

        sort(gaps.rbegin(), gaps.rend());

        lli days = 0;
        lli saved  = 0;
        for(auto gap : gaps){
            lli remaining =  gap - 2*days; 
            if(remaining<=0) continue;

            lli safe = max(1LL, remaining-1);
            saved +=safe;
            days +=2;
        }

        cout << n - saved << endl;


    }

    return 0;
}