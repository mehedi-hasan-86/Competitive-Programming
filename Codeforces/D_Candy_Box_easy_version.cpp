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

    int q;
    cin >> q;

    while(q--){
        int n;
        cin >> n;

        vi a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        unordered_map<int,int> freq;
        for(int x: a){
            freq[x]++;
        }
        vi fr;
        for(auto &it : freq){
            fr.push_back(it.second);
        }
        sort(fr.rbegin(), fr.rend());

        int lst = 1e9;
        int ans = 0;
        for(int x : fr){
            int take = min(x,lst-1);
            if(take<=0) break;

            ans +=take;
            lst = take;
        }
        cout << ans << endl;
    }

    return 0;
}