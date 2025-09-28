#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);


    lli n;
    cin >> n;

    vl ans;
    ans.push_back(n);
    while(n != 1){
       if(n%2==0){
        n = n/2;
        ans.push_back(n);
       }else{
        n = n*3 + 1;
        ans.push_back(n);
       }
    }
    for(auto i : ans){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}