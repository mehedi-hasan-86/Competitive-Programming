#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int cntDig(lli x){
    if(x==0) return 1;
    return floor(log10(x))+1;
}

int tz(lli x){
    int cnt = 0;
    while(x){
        int ld = x%10;
        if(ld==0){
            cnt++;
            x/=10;
        }else{
            break;
        }
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;

        vl a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        vi atz;
        int tld = 0;
        for(int i=0; i<n; i++){
            int cnt = tz(a[i]);
            atz.push_back(cnt);
            tld += cntDig(a[i]);
        }
        sort(atz.rbegin(), atz.rend());
        int rmd =0;
        for(int i=0; i<atz.size(); i+=2){
            rmd +=atz[i];
        }
        if(tld-rmd>=m+1){
            cout <<"Sasha"<< endl;
        }else{
            cout <<"Anna"<< endl;
        }
    }

    return 0;
}