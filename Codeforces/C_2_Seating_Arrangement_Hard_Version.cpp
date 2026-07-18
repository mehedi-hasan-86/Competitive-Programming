#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

lli tc, st;

lli check(string &p, int introAm){

    lli oT = 0;
    lli std = 0;

    for(char person : p){
        if(person == 'A'){
            // person = (introAm-- > 0 ? 'I':'E');

            if(person == 'A'){
                if(introAm>0){
                person = 'I';
                introAm--;
            }else{
                person = 'E';
            }
              
        }
        }
        if(person == 'I'){
            if(oT < tc){
                oT++;
                std++;
            }
        }else{
            if(std<oT*st){
                std++;
            }
        }
    }
    return std;
}

void solve(){

    int n;
    cin >> n >> tc >> st;

    string p;
    cin >> p;

    int amC = count(p.begin(), p.end(),'A');
    int l = 0, r = amC;

    while(l<r){
        int m = l + (r-l)/2;
        if(check(p,m) < check(p,m+1)){
            l = m+1;
        }else{
            r = m;
        }
    }
    cout << check(p, l) << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}