#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

bool check(double mid, double target){
    return mid*mid*mid*mid>=target;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    double target;
    cin >> target;

    double l = 1, r = target;

    if(target<1) l = target, r = 1;

    int iterations = 60;
    for(int i=0; i<iterations; i++){
        double mid = sqrt(l*r);
        if(check(mid, target)) r = mid;
        else l = mid;
    }
    cout << fixed << setprecision(10) << sqrt(l*r) << endl;

    return 0;
}