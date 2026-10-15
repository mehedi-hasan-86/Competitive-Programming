#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'

int minGroups(vector<vector<int>> &intervals){
   sort(intervals.begin(), intervals.end());

   priority_queue<int,vector<int>, greater<int>> pq;
   for(int i=0; i<intervals.size(); i++){
    if(!pq.empty() && pq.top()<intervals[i][0]){
        pq.pop();
    }
    pq.push(intervals[i][1]);
   }
   return pq.size();
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin  >> n;

    vector<vector<int>> intervals(n, vector<int> (2));
    for(int i=0; i<n; i++){
        cin >> intervals[i][0] >> intervals[i][1];
    }
    cout << minGroups(intervals) << endl;

    

    return 0;
}