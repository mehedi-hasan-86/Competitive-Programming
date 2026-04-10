#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

bool isIso(string s, string t){

    int m1[256]={0}, m2[256]={0};
    int n = s.size();

    for(int i=0; i<n; i++){
        if(m1[s[i]] != m2[t[i]]) return false;

        m1[s[i]] = i+1;
        m2[t[i]] = i+1;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s,t;
    cin >> s >> t;

    if(isIso(s,t)){
        cout <<"True"<< endl;
    }else{
        cout <<"False"<< endl;
    }
    return 0;
}