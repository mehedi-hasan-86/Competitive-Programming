#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int n;
int countSolutions = 0;

vi column, diag1, diag2;

void search(int row){
    if(row == n){
        countSolutions++;
        return;
    }

    for(int  col = 0; col<n; col++){
        if(column[col] || diag1[row+col] || diag2[row-col +n-1]){
            continue;
        }
        column[col] = diag1[row+col] = diag2[row-col+n-1] = 1;
        search(row+1);

        column[col] = diag1[row+col] = diag2[row-col+n-1] = 0;
    }
}





int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    column.assign(n,0);
    diag1.assign(2*n-1,0);
    diag2.assign(2*n-1,0);

    search(0);

    cout << n <<" " << countSolutions << endl;

    return 0;
}