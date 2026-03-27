#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

lli amkd(string s, int k){
    if(k<0) return 0;
    int left = 0;
    lli res =0;

    unordered_map<char,int> freq;

    for(int r = 0; r<s.size(); r++){
        freq[s[r]]++;

        while(freq.size()>k){
            freq[s[left]]--;
            if(freq[s[left]]==0) freq.erase(s[left]);
            left++;
        }
        res += (r-left+1);
    }
    return res;
}

lli countSubstrings(string s, int k){
    return amkd(s,k) - amkd(s,k-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    int k;
    cin >> s >> k;

    cout << countSubstrings(s,k) << endl;

    return 0;
}