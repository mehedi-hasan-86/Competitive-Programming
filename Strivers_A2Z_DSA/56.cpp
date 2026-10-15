#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'

vector<vector<int>> MergeInterval(vector<vector<int>> & intervals){
    vector<vector<int>> ans;

    sort(intervals.begin(), intervals.end());

    for(int i=0; i<intervals.size(); i++){
        if(ans.empty() || intervals[i][0]> ans.back()[1]){
            ans.push_back(intervals[i]);
        }else{
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
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

    vector<vector<int>> ans = MergeInterval(intervals);
    for(auto x : ans){
         for(int y : x){
            cout << y << " ";
         }
         cout << endl;
    }

    

    return 0;
}