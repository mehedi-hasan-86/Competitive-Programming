#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vi a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        int x = INT_MIN, y = INT_MIN;
        int ans = 0;

        vi s, t_seq; // s -> first sequence (x), t_seq -> second sequence (y)

        for(int i=0;i<n;i++){
            if(x < y){
                swap(x,y);
                swap(s, t_seq); // swap sequences too
            }

            if(x <= a[i]){
                x = a[i];
                s.push_back(a[i]);
            } else if(a[i] < y){
                ans++;
                x = a[i];
                s.clear();
                s.push_back(a[i]); // reset sequence
            } else {
                y = a[i];
                t_seq.push_back(a[i]);
            }
        }

        cout << "Minimum Penalty: " << ans << "\n";
        cout << "Sequence s: ";
        for(int val: s) cout << val << " ";
        cout << "\nSequence t: ";
        for(int val: t_seq) cout << val << " ";
        cout << "\n\n";
    }

    return 0;
}