#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int N = 1e7;

vi spf(N+1);

void sieve(){
    for(int i=1; i<=N; i++){
        spf[i] = i;
    }

    for(int i=2; i*i<=N; i++){
        if(spf[i]==i){
            for(int j=i*i; j<=N; j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    sieve();

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vi a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        unordered_map<int, lli> total;

        for(int i=0; i<n; i++){
            int x = a[i];
            while(x>1){
                int p = spf[x];
                int cnt = 0;

                while(x%p==0){
                    x /=p;
                    cnt++;
                }
                total[p] +=cnt;
            }
        }

        bool isC = true;

        for(auto it : total){
            if(it.second %n != 0){
                isC = false;
                break;
            }
        }

        cout << (isC ? "YES\n":"NO\n");




    }

    return 0;
}