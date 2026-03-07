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

    string s;
    cin >> s;

    set<char> ss(s.begin(), s.end());
    
    if(ss.size()%2==0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout <<"IGNORE HIM!" << endl;
    }

    return 0;
}