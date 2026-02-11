#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int sumOfDig(lli n){
    int sum = 0;
    while(n){
        sum +=n%10;
        n /=10;
    }
    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        lli x;
        cin >> x;
        
        int cnt = 0;

        for(int s = 1; s<=100; s++){
            lli y = x+s;
            if(sumOfDig(y)==s){
                cnt++;
            }
        }
        cout << cnt << endl;

    }

    return 0;
}