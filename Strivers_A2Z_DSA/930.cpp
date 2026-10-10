#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
#define endl '\n'

int atMost(vi &a, int g){
    
    int n =a.size();
    int sum = 0;
    int l = 0;
    int cnt = 0;
    for(int r = 0; r<n; r++){
        sum += a[r];
        while(sum > g){
            sum -=a[l];
            l++;
        }
        cnt +=r-l+1;
    }
    return cnt;
}

int  solve(vi &a, int g){
    return atMost(a,g)-atMost(a,g-1);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,g;
    cin >> n >> g;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

   cout <<  solve(a,g) << endl;

    return 0;
}