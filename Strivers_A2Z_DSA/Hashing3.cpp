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
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    unordered_map<int,int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cin >> q;
    while(q--){
        int  number;
        cin >> number;

        cout << mpp[number] << endl;
    }

    return 0;
}