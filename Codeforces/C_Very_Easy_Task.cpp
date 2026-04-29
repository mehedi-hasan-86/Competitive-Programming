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


    lli n, x, y;
    cin >> n >> x >> y;

    lli first = min(x, y);

    n--;

    lli left = 0, right = 1e18, ans = 0;

    while (left <= right) {
        lli mid = (left + right) / 2;

        lli copies = mid / x + mid / y;

        if (copies >= n) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans + first << endl;



    return 0;
}