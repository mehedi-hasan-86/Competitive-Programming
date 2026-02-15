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
    vector<int> b = a;

    vector<vector<int>> all;
    sort(a.begin(), a.end());
    do{
        all.push_back(a);
    }while(next_permutation(a.begin(), a.end()));

    vi ans;
    for(int i=0; i<all.size(); i++){
        if(all[i]==b){
            if(i == all.size()-1){
                ans = all[0];
            }else{
              ans = all[i+1];
            }
        }
    }
    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}