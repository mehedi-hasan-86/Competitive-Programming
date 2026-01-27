#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

bool isSorted_Rotated(vi &a){
    int n = a.size();
    int cnt = 0;
    for(int i=1; i<n; i++){
       if(a[i]<a[i-1]) cnt++;
    }
    if(a[n-1] < a[0]) cnt++;

    return cnt <=1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    if(isSorted_Rotated(a)){
        cout << "True" << endl;
    }else{
        cout <<"False" << endl;
    }
  

    return 0;
}