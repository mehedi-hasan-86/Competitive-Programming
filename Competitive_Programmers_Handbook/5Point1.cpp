#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

// int n;
// vi subset;

// void search(int k){
//     if(k==n){
//         cout << "{";
//         for(int x : subset) cout << x << " ";
//         cout << "}" << endl;
//     }else{
//         search(k+1);
//         subset.push_back(k);
//         search(k+1);
//         subset.pop_back();
//     }
// }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // cin >> n;
    // search(0);
    //1/Print All Subsets of {0,1,...,n-1}
    // int n;
    // cin >> n;

    // for(int b = 0; b<(1<<n); b++){
    //     vi subset;
    //     for(int i=0; i<n; i++){
    //         if(b&(1<<i)){
    //             subset.push_back(i);
    //         }
    //     }
    //     cout << "{";
    //     for(int x : subset) cout << x << " ";
    //     cout << "}\n";
    // }

    int n,k;
    cin >> n >> k;
    vi a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    int total = 1<< n;
    int cnt = 0;
    for(int mask = 0; mask < total;mask++){
         int sum = 0;
         vi subset;

         for(int i=0; i<n; i++){
            if(mask&(1<<i)){
                sum +=a[i];
                subset.push_back(a[i]);
            }
         }
         if(sum == k){
            cnt++;
        //     cout <<"{";
        //     for(int x : subset){
        //         cout << x << " ";
        //     }
        //     cout << "}"<< endl;
          }
        }
        cout << cnt << endl;


    return 0;
}