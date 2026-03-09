#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

bool is_vowel(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y' || c== 'A' || c=='E' || c=='I'||c=='O'||c=='U'|| c=='Y'){
        return true;
    }else{
        return false;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++){
        if(isupper(s[i]) && !is_vowel(s[i])){
            s[i] = s[i]+32;
        }
    }

    string ss = "";
    for(int i=0; i<s.size(); i++){
        if(!is_vowel(s[i])){
            ss +=s[i];
        }
    }

    for(int i=0; i<ss.size(); i++){
      cout << '.' << ss[i];
    }
    cout <<  endl;

    return 0;
}