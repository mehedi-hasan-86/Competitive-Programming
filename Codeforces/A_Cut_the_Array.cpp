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

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vi a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        bool isTrue = false;
        for(int l=1; l<n&& !isTrue; l++){
            for(int r=l+1; r<n; r++){
                int s1 = accumulate(a.begin(),a.begin()+l,0);
                int s2 = accumulate(a.begin()+l, a.begin()+r,0);
                int s3 = accumulate(a.begin()+r, a.end(),0);
                s1 = s1%3;
                s2 = s2%3;
                s3 = s3%3;

                if((s1==s2 && s2==s3) || ((s1!=s2) && (s2 != s3 )&& (s3 != s1))){
                    cout << l << " " << r << endl;
                    isTrue = true;
                    break;
                } 
            }
        }
        if(!isTrue){
         cout << "0 0" << endl;
        }
        


    }

    return 0;
}