#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'

vector<vector<int>> insert(vector<vector<int>> & intervals, vector<int> &newInterval){
    vector<vector<int>> ans;

    int i = 0;
    int n = intervals.size();
    while(i<n && intervals[i][1]<=newInterval[0]){
        ans.push_back(intervals[i]);
        i++;
    }
    while(i<n && intervals[i][0] <= newInterval[1]){
        newInterval[0] = min(newInterval[0], intervals[i][0]);
        newInterval[1] = max(newInterval[1], intervals[i][1]);
        i++;
    }
    ans.push_back(newInterval);

    while(i<n){
        ans.push_back(intervals[i]);
        i++;
    }
    return ans;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));
    for(int i=0; i<n; i++){
        cin >> intervals[i][0] >> intervals[i][1];
    }
    vector<int> newInterval(2);
    cin >> newInterval[0] >> newInterval[1];

    vector<vector<int>> ans = insert(intervals, newInterval);
    for(auto x : ans){
         for(int y : x){
            cout << y << " ";
         }
         cout << endl;
    }

    

    return 0;
}