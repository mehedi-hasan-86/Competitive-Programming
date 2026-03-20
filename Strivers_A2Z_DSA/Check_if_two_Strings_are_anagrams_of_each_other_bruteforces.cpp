#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

bool CheckAnagrams(string s1, string s2){
    if(s1.size() != s2.size()){
        return false;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1==s2){
        return true;
    }else{
        return false;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s1, s2;
    cin >> s1 >> s2;

    if(CheckAnagrams(s1, s2)){
        cout <<"True" << endl;
    }else{
        cout <<"False" << endl;
    }

    return 0;
}