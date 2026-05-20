#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // char a = 'a';
    // cout << a << endl;

    // string s;
    // cin >> s;
    // cout << s << endl;

    // cout << s[0] << endl;
    // cout << s.size() << endl;
    // for(int i=0; i<s.size(); i++){
    //     cout << s[i];
    // }
    // cout << endl;

    // int t;
    // cin >> t;
    // cin.ignore();
    // while(t--){     
    // string s;
    // getline(cin , s);
    // cout  << s << endl;
    // }

    string s;
    cin >> s;


    string rev;
    // string rev = "";
    for(int i=(int)s.size()-1; i>=0; i--){
        rev +=s[i];
    }
    cout << rev << endl;

    reverse(s.begin(), s.end());

    if(s==rev){
        cout <<"YES" << endl;
    }else{
        cout << "NO" << endl;
    }




    return 0;
}