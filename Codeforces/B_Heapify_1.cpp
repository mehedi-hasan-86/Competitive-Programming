#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int ok(int x){
    while(x%2==0){
        x /=2;
    }
    return x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vi a(n+1);
        vi pos(n+1);
        for(int i=1; i<=n; i++){
            cin >> a[i];
            pos[a[i]] = i;
        }



        // vi res;

        // for(int i=1; i<=n; i++){
        //     if(a[i-1] != i){
        //         res.push_back(i);
        //     }
        // }

        bool isC = true;

        for(int i=1; i<=n; i++){
            if(ok(i) != ok(pos[i])){
                isC = false;
                break;
            }
        }
        // for(int i=0; i<res.size()-1; i++){
        //     if(res[i+1]-res[i] !=2 ){
        //         isC =false;
        //     }
        // }
        if(isC){
            cout <<"YES" <<endl;
        }else{
            cout <<"NO" << endl;
        }


    }

    return 0;
}