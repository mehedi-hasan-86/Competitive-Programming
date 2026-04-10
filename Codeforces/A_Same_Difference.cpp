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

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<char, int> freq;
        for(int i=0; i<n; i++){
           freq[s[i]]++;
        }
        int val = 0;
        for(auto it  : freq){
            if(s[n-1]==it.first){
                val = it.second;
            }
        }

        cout << n-val << endl;
    }

    return 0;
}