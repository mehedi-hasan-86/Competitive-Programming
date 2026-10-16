#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'

bool checkValidString(string s){
    int low = 0;
    int high = 0;

    for(char c : s){
        if(c=='('){
            low++;
            high++;
        }else if(c==')'){
            low--;
            high--;
        }else{
            low--;
            high++;
        }

        if(high<0){
            return false;
        }
        if(low<0){
            low = 0;
        }
    }
    return low ==0;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    bool isC = checkValidString(s);
    cout << (isC ? "True":"False") << endl;
    return 0;
}