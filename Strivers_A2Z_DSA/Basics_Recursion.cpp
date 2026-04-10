#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int cnt = 0;
void print(){
    if(cnt == 3) return ;
    cout << cnt << endl;
    cnt++;
    print();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    print();

    return 0;
}