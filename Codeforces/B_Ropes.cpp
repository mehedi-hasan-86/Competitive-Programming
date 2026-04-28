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

    int n,k;
    cin >> n >> k;

    vector<double> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    double low = 0, high = *max_element(a.begin(), a.end());

    for(int i=0; i<100; i++){
        double mid = low + (high-low)/2;

        int pices = 0;
        for(int i=0; i<n; i++){
            pices += (int)(a[i]/mid);
        }

        if(pices >=k) low = mid;
        else high = mid;
    }
    cout << fixed << setprecision(6) << low << endl;




    return 0;
}