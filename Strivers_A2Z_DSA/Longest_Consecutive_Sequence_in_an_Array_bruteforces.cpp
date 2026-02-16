#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

bool linearSearch(vi a , int num){
    int n = a.size();
    for(int i=0; i<n; i++){
        if(a[i]==num){
            return true;
        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int longest = 1;
    for(int i=0; i<n; i++){
        int x = a[i];
        int cnt = 1;

        while(linearSearch(a, x+1) == true){
            x++;
            cnt++;
        }
        longest = max(longest, cnt);
    }
    cout << longest << endl;

    return 0;
}