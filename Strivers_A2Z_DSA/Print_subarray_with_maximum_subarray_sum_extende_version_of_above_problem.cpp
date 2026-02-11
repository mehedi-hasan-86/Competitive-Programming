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

    lli sum = a[0], mx = a[0];
    int start = 0, end = 0, tempStart = 0;
    for(int i=1; i<n; i++){
        if(a[i] > sum+a[i]){
        sum = a[i];
        tempStart = i;
        }else{
        sum +=a[i];
        }

        if(sum>mx){
            mx = sum;
            start = tempStart;
            end = i;
        }
    }

    for(int i=start; i<=end; i++){
        cout << a[i] << " ";
    }
    cout <<endl;

    return 0;
}