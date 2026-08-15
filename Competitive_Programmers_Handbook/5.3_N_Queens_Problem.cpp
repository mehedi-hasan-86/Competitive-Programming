#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
#define endl '\n'
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e6;



int n = 4;
int countSolutions = 0;
bool column[10], diag1[20], diag2[20];
int queens[10]; // queen[row] = column

void printBoard(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(queens[i]==j) cout <<"Q ";
            else cout <<". ";
        }
        cout << endl;
    }
    cout << endl;
}

void search(int row){
    if(row==n){
        countSolutions++;
        cout <<"Solution " << countSolutions << ":\n";
        printBoard();
        return;
    }

    for(int col = 0; col<n; col++){
        if(column[col] || diag1[row+col] || diag2[row-col+n-1]){
            continue;
        }

        queens[row] = col;
        column[col] = true;
        diag1[row+col] = true;
        diag2[row-col+n-1] = true;

        search(row+1);

        column[col]  = false;
        diag1[row+col] = false;
        diag2[row-col+n-1] = false;
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout <<"N-Queens solutions for n=" <<  n << endl;
    search(0);
    cout <<"Total solutions: " << countSolutions << endl;

    return 0;
}