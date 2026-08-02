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

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    stack<int> st;

    for(int i=0; i<n; i++){
        while(!st.empty() && st.top()>=a[i]){
            st.pop();
        }
        if(st.empty()){
            cout << -1 << " ";
        }else{
            cout << st.top() << " ";
        }
        st.push(a[i]);
    }
    cout << endl;

    return 0;
}