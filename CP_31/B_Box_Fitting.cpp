#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        long long W;
        cin >> n >> W;

        vector<int> cnt(21,0);

        for(int i=0;i<n;i++){
            long long w;
            cin >> w;
            int p = log2(w);
            cnt[p]++;
        }

        int height = 0;

        while(true){
            long long space = W;
            bool used = false;

            for(int i=20;i>=0;i--){
                while(cnt[i] && (1LL<<i) <= space){
                    space -= (1LL<<i);
                    cnt[i]--;
                    used = true;
                }
            }

            if(!used) break;
            height++;
        }

        cout << height << "\n";
    }
}