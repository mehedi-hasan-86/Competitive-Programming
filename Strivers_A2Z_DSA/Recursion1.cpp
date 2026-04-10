#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

// int fact(int n){
//     if(n==0) return 1;
//     return n*fact(n-1);
// }

bool f(int i, string &s){
     if(i>=s.size()/2) return true;
     if(s[i] != s[s.size()-i-1]) return false;
     return f(i+1, s);
}

// void f(int i, int arr[], int n){
//      if(i>=n/2) return;
//      swap(arr[i], arr[n-i-1]);
//      f(i+1, arr,n);
// }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    cout << f(0,s) << endl;

    // int n;
    // cin >> n;

    // int arr[n];
    // for(int i=0; i<n; i++) cin >> arr[i];
    // f(0,arr,n);
    // for(int i=0; i<n; i++) cout << arr[i] << " ";


    // cout << fact(n) <<endl;

    return 0;
}