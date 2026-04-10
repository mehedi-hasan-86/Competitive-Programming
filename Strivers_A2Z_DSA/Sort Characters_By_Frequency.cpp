#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;



string frequencySort(string &s){
        pair<int,char> freq[26];
        for(int i=0; i<256; i++){
            freq[i]={0,i+'a'};
        }
        for(char c : s){
            freq[c-'a'].first++;
        }

        sort(freq, freq+256);
        reverse(freq, freq+256);
        string res = "";
        for(int i=0;i<26; i++){
            while(freq[i].first--) res += freq[i].second;
        }
        return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    string res = frequencySort(s);
    cout << res << endl;
    return 0;
}