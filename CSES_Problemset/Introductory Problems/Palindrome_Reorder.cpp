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

    string s;
    cin >> s;

    int n = s.length();
    int  freq[26] = {};
    for(int i=0; i<n; i++){
        freq[s[i]-'A']++;
    }
    int cnt = 0;
    string mid;
    for(int i=0; i<26; i++){
        if(freq[i]%2==1){
            cnt++;
            mid = 'A'+i;
        }
    }

    if(cnt >1){
        cout <<"NO SOLUTION" << endl;
        return 0;
    }
    string left;
    for(int i=0; i<26; i++){
        left.append(freq[i]/2,'A'+i);
    }
    string right = left;
    reverse(right.begin(), right.end());

    cout << left + mid + right << endl;


    return 0;
}