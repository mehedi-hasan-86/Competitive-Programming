#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int M = 2e6 + 5;
int st[M][20];
int lg[M];

int query(int l, int r){
    int j = lg[r-l+1];
    return st[l][j]&st[r-(1<<j)+1][j];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    lg[1]=0;
    for(int i=2; i<M; i++){
        lg[i] = lg[i/2]+1;
    }

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vi a(n+1);
        for(int i=1; i<=n; i++){
            cin >> a[i];
            st[i][0] = a[i];
        }

        for(int j=1; (1<<j) <=n; j++){
            for(int i=1; i+(1<<j)-1 <=n; i++){
                st[i][j] = st[i][j-1] & st[i+(1<<(j-1))][j-1];
            }
        }

        int q;
        cin >> q;

        while(q--){
            int l,k;
            cin >> l >> k;

            int low = l, high = n, ans = -1;
            while(low<=high){
                int mid = low +(high-low)/2;

                if(query(l,mid)>=k){
                    ans = mid;
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }

            // int cur = a[l];
            // int ans = -1;
            // for(int r=l; r<=n; r++){
            //     if(l==r) cur = a[l];
            //     else cur &=a[r];

            //     if(cur>=k){
            //         ans = r;
            //     }else{
            //         break;
            //     }
            // }
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}