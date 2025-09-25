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

    int n,m;
    cin >> n >> m;

    string full(m,'#');
    string right = string(m-1,'.') + "#";
    string left = "#" + string(m-1,'.');

    for(int i=1; i<=n; i++){
        if(i%2){
            cout << full << endl;
        }else if((i/2)%2){
            cout << right << endl;
        }else{
            cout <<  left<< endl;
        }
      
    }



    //Approach 2 :

    // for(int i=1; i<=n; i++){
    //     if(i%2){
    //         cout << string(m,'#');
    //     }else if((i/2)%2){
    //         cout << string(m-1,'.') << '#';
    //     }else{
    //         cout << '#' << string(m-1,'.');
    //     }
    //     cout << endl;
    // }

    //Approach 1 :

    // for(int i=1; i<=n; i++){
    
    //        if(i%2==1){
    //         for(int j=1; j<=m; j++){
    //         cout << "#";
    //         }
    //        }else{
    //         if((i/2)%2 == 1){
    //             for(int j=1; j<m; j++){
    //               cout << ".";
    //             }
    //             cout << "#";
    //         }else{
    //             cout << "#";
    //             for(int j=1; j<m; j++){
    //                 cout << "." ;
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

    return 0;
}