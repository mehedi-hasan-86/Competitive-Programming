#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

bool binarySearch(vi a, int num){
    int n = a.size();
    int l = 0, h = n-1;
    while(l<=h){
        int m = l + (h-l)/2;

        if(a[m]==num){
            return true;
        }else if(a[m]>num){
            h = m-1;
        }else{
            l = m+1;
        }
    }
    return false;
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
    sort(a.begin(), a.end());


    int longest = 0;
    for(int i=0; i<n; i++){

        int x = a[i];
        int cnt = 1;
        while(binarySearch(a,x+1)){
            x++;
            cnt++;
        }
        longest = max(longest, cnt);
    }
    cout << longest << endl;

    return 0;
}