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
    
    int best = 0;
    int n;
    cin >> n;

    vi arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
   //O(n*n*n)
   /*
       for(int a = 0; a<n; a++){
        for(int b=a; b<n; b++){
            int sum = 0;
            for(int k=a; k<=b; k++){
                sum +=arr[k];
            }
            best = max(best, sum);
        }
    }
    cout << best << endl;
   */

   //O(n*n)

//    for(int a=0; a<n; a++){
//     int sum = 0;
//     for(int b = a; b<n; b++){
//         sum +=arr[b];
//         best = max(best, sum);
//     }
//    }
//    cout << best << endl;


      //O(n)
      int sum = 0;
      for(int k=0; k<n; k++){
        sum = max(arr[k],sum+arr[k]);
        best = max(best, sum);
      }
      cout << best << endl;
    


    return 0;
}