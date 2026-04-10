#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

bool rotateString(string &s, string &goal){
    if(s.length() != goal.length()) return false;

    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s, goal;
    cin >> s >>  goal;

    if(rotateString(s,goal)){
        cout <<"true" << endl;
    }else{
        cout <<"false" << endl;
    }

    return 0;
}