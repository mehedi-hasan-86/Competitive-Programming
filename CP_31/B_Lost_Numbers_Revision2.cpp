#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

vi p = {4,8,15,16,23,42};
int ans[4];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    for(int i=0; i<4; i++){
        cout <<"? " << i+1 << " " << i+2 << endl;
        cout.flush();
        cin >> ans[i];
    }

    do{
        bool gd = true;
        for(int i=0; i<4; i++){
            gd &= (p[i]*p[i+1]==ans[i]);
    }
    if(gd) break;
    }while(next_permutation(p.begin(), p.end()));

    cout <<"!";
    for(int i=0; i<6; i++){
        cout << " " << p[i];
    }
    cout << endl;

    return 0;
}