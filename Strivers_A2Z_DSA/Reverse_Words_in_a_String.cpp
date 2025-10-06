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
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        while(ss >> word){
            words.push_back(word);
        }

        reverse(words.begin(), words.end());

        string res ;
        for(int i=0; i<words.size(); i++){
            res +=words[i];
            if(i != words.size()-1) res +=" ";
        }
        return res;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    Solution sol;

    string s;
    getline(cin , s);

    cout << sol.reverseWords(s) << endl;

    return 0;
}