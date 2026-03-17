#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int rowWithMat(vector<vector<int>> &mat, int n, int m){

    int cnt_max = 0;
    int idx = -1;
    for(int i=0; i<n; i++){
        int cnt_ones = 0;
        for(int j=0; j<m;j++){
            cnt_ones +=mat[i][j];
        }
        if(cnt_ones>cnt_max){
            cnt_max = cnt_ones;
            idx = i;
        }
    }
    return idx;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin >> n >> m;

     vector<vector<int>> mat(n, vector<int>(m));
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
     }

     cout << rowWithMat(mat, n,m) << endl;

    return 0;
}