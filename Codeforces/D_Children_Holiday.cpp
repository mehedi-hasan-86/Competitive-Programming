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

    int m, n;
    cin >> m >> n;

    vi t(n), z(n), y(n);
    for(int i = 0; i < n; i++){
        cin >> t[i] >> z[i] >> y[i];
    }

    auto can = [&](lli T, vi &cnt){
        lli total = 0;
        for(int i = 0; i < n; i++){
            lli cycle = (lli)z[i] * t[i] + y[i];
            lli full = T / cycle;
            lli rem = T % cycle;

            lli balloons = full * z[i];
            balloons += min((lli)z[i], rem / t[i]);

            cnt[i] = balloons;
            total += balloons;
        }
        return total >= m;
    };

    lli l = 0, r = 1e9, ans = 0;
    vi cnt(n);

    while(l <= r){
        lli mid = (l + r) / 2;
        vi temp(n);

        if(can(mid, temp)){
            ans = mid;
            cnt = temp;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << endl;

    int remaining = m;
    for(int i = 0; i < n; i++){
        int give = min(cnt[i], remaining);
        cout << give << " ";
        remaining -= give;
    }

    return 0;
}