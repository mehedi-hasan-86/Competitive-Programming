#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;

vi previousSmaller_With_indices(vi &a){
    int n = a.size();

    vi res(n,-1);
    stack<int> st;
    for(int i=0; i<n; i++){
        while(!st.empty() && a[st.top()]>a[i]){
            st.pop();
        }
        if(!st.empty()){
            res[i] = st.top();
        }
        st.push(i);
    }
    return res;
}

void previousSmaller(vector<int>& a) {
    int n = a.size();

    stack<int> st;
    for(int i = 0; i < n; i++){

        while (!st.empty() && st.top() >= a[i]) {
            st.pop();
        }
        if(!st.empty()){
            cout << "Nearest smaller of " << a[i] << " = "<< st.top() << endl;
        }else{
            cout << "No smaller element for "
                 << a[i] << endl;
        }
        st.push(a[i]);
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    previousSmaller(a);
    cout << endl;
    vi x = previousSmaller_With_indices(a);
    for(auto m : x){
        cout << m << " ";
    }
    cout << endl;
    return 0;
}