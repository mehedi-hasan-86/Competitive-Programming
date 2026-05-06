#include<bits/stdc++.h>
using namespace std;

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

        stack<int> st;
        vector<bool> valid(n, false);

        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                st.push(i);
            } 
            else { // ')'
                if(!st.empty()){
                    valid[i] = true;
                    valid[st.top()] = true;
                    st.pop();
                }
            }
        }

        // build remaining string
        string res = "";
        for(int i = 0; i < n; i++){
            if(!valid[i]){
                res += s[i];
            }
        }

        if(res.size() == 0 || (res.size()==2 && (res[0]==')' && res[1]=='('))){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}