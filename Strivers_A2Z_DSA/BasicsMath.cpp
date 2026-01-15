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

    int cnt  = 0;
    for(int i=1; i*i<n; i++){
        if(n%i==0){
            cnt++;
             if(n/i != i) cnt++;
        }
       
    }
    if(cnt==2) cout <<"True" << endl;
    else cout <<"False" << endl;




    // Print all divisors

    // vector<int> ls;

    // for(int i=1; i*i<=n; i++){
    //     if(n%i==0){
    //         ls.push_back(i);
    //         if(n/i != i){
    //             ls.push_back(n/i);
    //         }
    //     }
    // }
    // sort(ls.begin(), ls.end());
    // for(auto it : ls) cout << it <<  " ";

    //Check Armstrong Number

    // int res = 0;
    // int original = n;
    // while(n){
    //     int lsd = n%10;
    //     res = res + (lsd*lsd*lsd);
    //     n = n/10;
    // }
    // if(original== res){
    //     cout << "True" << endl;
    // }else{
    //     cout <<"False" << endl;
    // }

    //check Palindrome
    // int revNum = 0;
    // while(n){
    //     int lsd = n%10;
    //     revNum = revNum*10 + lsd;
    //     n = n/10;
    // }
    // if(revNum == n){
    //     cout << "True" << endl;
    // }else{
    //     cout << "False" << endl;
    // }



    // Reverse Number
    // int revNum = 0;
    // while(n){
    //     int lsd = n%10;
    //     revNum = revNum*10 + lsd;
    //     n = n/10;
    // }
    // cout << revNum << endl;

    //count Digit

    // int cnt = int(log10(n)+1);

    // // int cnt = 0;
    // // while(n){
    // //     n = n/10;
    // //     cnt++;
    // // }
    // cout << cnt << endl;

    return 0;
}