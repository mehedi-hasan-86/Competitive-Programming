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

    int n,s;
    cin >> n >> s;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++){
        v.push_back({a[i],i});
    }
    sort(v.begin(), v.end());

    int l=0, r = n-1;
    while(l<r){
        int sum = v[l].first + v[r].first;
        if(sum==s) {
            cout << v[l].second <<" " <<  v[r].second << endl;
            return 0;
        }else if(sum>s){
            r--;
        }else{
            l++;
        }
    }


    return 0;
}