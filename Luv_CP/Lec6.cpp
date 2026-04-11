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

    int a = 2;
    int b = 3;
    /*
    if is true ouput 1 , otherwise false ouput 0
    */
    cout << (a==b) << endl;  // 0
    cout << (a !=b) << endl; // 1
    cout << (a<b) << endl; // 1
    cout << (a<=b) << endl; // 1
    cout << (a>b) << endl; // 0
    cout << (a>b) << endl; // 0

    /*
    && means and operation like 
     0 0 = 0
     0 1 = 0
     1 0 = 0
     1 1 = 1
    */

    /*
    || measn or operation like 
    0 0 = 0
    0 1 = 1
    1 0 = 1
    1 1 = 1
    */
    cout << ((a==b) &&  (a<b)) << endl; // 0
    cout << ((a==b) || (a<b)) << endl; // 1

    // int n;
    // cin >> n;

    // if(n%2==0){
    //     cout <<"YES" << endl;
    // }else{
    //     cout << "NO" << endl;
    // }

    // int n ;
    // cin >> n;

    // {
    //     int x;
    // }

    // int i=1;
    // while(i<=10){
    //     cout << i << " ";
    //     i++;
    // }

    // for(int i=0; i<10; i++){
    //     cout << i << " ";
    // // }
    // cout << endl;

//     int t;
//     cin >> t;

//     while(t--){
//     for(int i=1; i<=3; i++){
//     for(int j=1; j<=i; j++){
//         cout <<"*";
//         }
//     cout << endl;
//     }
// }

    // while(1){

    // }
    // for(;;){

    // }

    // for(int i=0; ture; i++){

    // }

    // while(1){
    //     int x;
    //     cin >> x;

    //     if(x==42) break;
    //     cout << x << " ";
    // }
    // cout << endl;

    int n;
    cin >> n;

    int sum = 0;
    while(n){
        int ld = n%10;
        sum +=ld;
        n/=10;
    }
    cout << sum << endl;


  return 0;
}