#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.size();
    int cnt[3] = {0};
    int l = 0;
    int ans = 0;
    for(int r = 0; r<n; r++){
        cnt[s[r]-'a']++;

        while(cnt[0]>0 && cnt[1]>0 && cnt[2]>0){
            ans +=n-r;
            cnt[s[l]-'a']--;
            l++;
        }
    }
    cout << ans << endl;

    return 0;
}