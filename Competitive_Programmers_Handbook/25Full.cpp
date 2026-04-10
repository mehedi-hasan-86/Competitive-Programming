#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

// Grundy numbers for heaps splitting (Grundy's Game)
int grundySplit(int n, vector<int> &dp){
    if(dp[n] != -1) return dp[n];

    set<int> nextGrundy;
    for(int i=1; i<=n/2; i++){
        int j = n - i;
        if(i != j)
            nextGrundy.insert(grundySplit(i, dp) ^ grundySplit(j, dp));
    }

    int g = 0;
    while(nextGrundy.count(g)) g++;

    return dp[n] = g;
}

// Nim Game Function
pair<string, pair<int,int>> nimMove(vector<int> heaps){
    int nimSum = 0;
    for(int x : heaps) nimSum ^= x;

    if(nimSum == 0) return {"Second", {-1, -1}};

    for(int i=0; i<heaps.size(); i++){
        int target = heaps[i] ^ nimSum;
        if(target < heaps[i])
            return {"First", {i, heaps[i] - target}};
    }

    return {"First", {-1, -1}};
}

// Misère Nim
string misereNim(vector<int> &heaps){
    int nimSum = 0, ones = 0;

    for(int x : heaps){
        nimSum ^= x;
        if(x == 1) ones++;
    }

    bool allOne = (ones == heaps.size());

    if(allOne)
        return (ones % 2 == 0) ? "First" : "Second";

    return (nimSum == 0) ? "Second" : "First";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cout << "Enter number of heaps: ";
    cin >> n;

    vector<int> heaps(n);
    cout << "Enter heap sizes: ";
    for(int i = 0; i < n; i++) cin >> heaps[i];

    // Standard Nim (C++14 FIX)
    pair<string, pair<int,int>> res = nimMove(heaps);
    string winner = res.first;
    pair<int,int> move = res.second;

    cout << "Standard Nim winner: " << winner << "\n";

    if(move.first != -1){
        cout << "Optimal move: remove "
             << move.second << " sticks from heap "
             << move.first + 1 << "\n";
    }

    // Misère Nim
    cout << "Misère Nim winner: " << misereNim(heaps) << "\n";

    // Grundy Split
    int maxHeap = *max_element(heaps.begin(), heaps.end());

    vector<int> dp(maxHeap + 1, -1);
    dp[0] = dp[1] = dp[2] = 0;

    cout << "Grundy numbers for heaps:\n";
    for(int i = 1; i <= maxHeap; i++){
        cout << "Heap " << i << ": " << grundySplit(i, dp) << "\n";
    }

    return 0;
}