#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

vector<vector<int>> generate(int numRows){
    vector<vector<int>> triangle;

    for(int i=0; i<numRows; i++){
        vector<int> row(i+1, 1);
        for(int j=1; j<i; j++){
            row[j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
        triangle.push_back(row);
    }
    return triangle;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<vector<int>> res = generate(n);
    for(auto &row : res){
        for(auto &val : row) cout << val << " ";
        cout << endl;
    }



    return 0;
}