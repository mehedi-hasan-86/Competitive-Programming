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

    int cnt = 0;
    int ele = 0;

    for(int i=0; i<n; i++){
        if(cnt ==0){
            cnt++;
            ele = a[i];
        }else if(a[i]==ele){
            cnt++;
        }else{
            cnt--;
        }
    }

    int cnt1 = 0;
    for(int i=0; i<n; i++){
        if(a[i]==ele){
            cnt1++;
        }
    }
    if(cnt1>n/2){
        cout << ele << endl;
    }else{
        cout<< -1 << endl;
    }
    

    return 0;
}