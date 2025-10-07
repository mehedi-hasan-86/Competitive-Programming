
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size()-1; i>=0; i--){
            if((num[i]-'0')%2 ==1){
                return num.substr(0, i+1);
            }
        }
        return "";
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    Solution sol;

    string s;
    cin >> s;


    cout << sol.largestOddNumber(s) << endl;


    return 0;
}