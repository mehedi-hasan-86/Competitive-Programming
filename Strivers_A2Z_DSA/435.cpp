#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'



int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(),
     [](vector<int>& a, vector<int>& b) {
         return a[1] < b[1];
     });

    for(int i=0; i<intervals.size(); i++){
        cout<< intervals[i][0] << " " << intervals[i][1] << endl;
    }
    cout << endl;

        int cnt = 0;
        int end = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] < end) {
                cnt++;
            } else {
                end = intervals[i][1];
            }
        }

        return cnt;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> interval(n,vector<int>(2));
    for(int i=0; i<n; i++){
        cin >> interval[i][0] >> interval[i][1];
    }

    cout << eraseOverlapIntervals(interval);

    

    return 0;
}