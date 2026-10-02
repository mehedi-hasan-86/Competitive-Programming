
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define endl '\n'

typedef long long lli;

typedef tree<
    int,
    null_type,
    less<int>,
    rb_tree_tag,
    tree_order_statistics_node_update
> ordered_set;

void solve()
{
    int n;
    cin >> n;

    vector<pair<int,int>> a(n);

    for(auto &p : a)
        cin >> p.second >> p.first;

    sort(a.begin(), a.end());

    lli ans = 0;
    ordered_set st;

    for(auto p : a)
    {
        ans += st.size() - st.order_of_key(p.second);

        st.insert(p.second);
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}