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
    int freq[26] = {0};

    for(int i=0; i<s1.size(); i++){
        freq[s1[i]-'A']++;
    }
    for(int i=0; i<s2.size();i++){
        freq[s2[i]-'A']--;
    }

    for(int i=0; i<26; i++){
        if(freq[i] != 0){
            return false;
        }
    }
    return true;
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