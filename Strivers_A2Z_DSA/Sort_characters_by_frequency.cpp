#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

bool comparator(pair<int,char>p1, pair<int,char> p2){
    if(p1.first>p2.first) return true;
    if(p1.first<p2.first) return false;
    return p1.second < p2.second;
}

vector<char> frequencySort(string &s){
    pair<int,char> freq[26];

    for(int i=0; i<26; i++){
        freq[i] = {0, i+'a'};
    }
    for(char c : s){
        freq[c-'a'].first++;
    }
    sort(freq, freq+26, comparator);

    vector<char> ans;
    for(int i=0; i<26; i++){
        if(freq[i].first>0) ans.push_back(freq[i].second);
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    vector<char> res = frequencySort(s);
    for(char c : res){
        cout << c << " ";
    }
    return 0;
}