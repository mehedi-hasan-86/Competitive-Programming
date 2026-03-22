#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

vector<pair<int,int>> moves;

void move(int n, int a, int b, int c){
    if(n==1){
        moves.emplace_back(a,b);
    }else{
        move(n-1, a,c,b);
        move(1,a,b,c);
        move(n-1,c,b,a);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    move(n,1,3,2);
    cout << moves.size() << endl;
    for(auto x : moves){
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}