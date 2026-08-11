#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;

double absoluteSum(vi &a, double x){
    double sum = 0;
    for(int val : a){
        sum += abs(val-x);
    }
    return sum;
}

double minimizeAbsoulteSum(vi  &a){
    int n = a.size();
    sort(a.begin(), a.end());

    double median;
    if(n%2 == 1){
        median = a[n/2];
    }else{
        median = (a[n/2 -1] + a[n/2])/2.0;
    }
    return absoluteSum(a,median);
}

void testDifferentX(vi &a){
    for(int x = 0; x<=10; x++){
        double sum = absoluteSum(a,x);
        cout << "x = " << x << " -> sum = " << sum << endl;
    }
}

double minimizeSquaredSum(vi &a){
    int n = a.size();

    double sum = 0;
    sum = accumulate(a.begin(), a.end(), 0.0);
    double avg = sum/n;

    double res = 0;
    for(int x : a){
        res += (x-avg)*(x-avg);
    }
    return res;
}

void testDifferentXX(vi &a){
    for(int x = 0; x<=10; x++){
        double sum = 0;
        for(int val : a){
            sum += (val - x)* (val-x);
        }
        cout << "X = " << x << " -> sum=" << sum << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    double res = minimizeAbsoulteSum(a);
    cout << res << endl;

    testDifferentX(a);

    double res1 = minimizeSquaredSum(a);
    cout << res1 << endl;
    testDifferentXX(a);

    return 0;
}