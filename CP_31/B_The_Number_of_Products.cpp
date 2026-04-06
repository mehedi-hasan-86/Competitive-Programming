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

    vl a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int bl = 0;
    lli cnt1 = 1, cnt2 = 0, ansP =0;
    for(int i=0; i<n; i++){
        if(a[i]<0) bl++;

        if(bl%2==0){
            ansP +=cnt1;
            cnt1++;
        }else{
            ansP +=cnt2;
            cnt2++;
        }
    }

    lli tl = 1LL*n*(n+1)/2;
    lli ansN = tl - ansP;
    cout << ansN << " " << ansP << endl;
    // int cntP = 0, cntN = 0;
    // for(int i=0; i<n; i++){
    //     int sign = 1;
    //     for(int j=i; j<n; j++){
    //         // for(int k=i; k<=j; k++){
    //           if(a[j]<0) sign *=-1;
    //         // }
    //         if(sign>0) cntP++;
    //         else cntN++;
  
    //     }

    // }
    // cout << cntN << " " << cntP << endl;
    return 0;
}