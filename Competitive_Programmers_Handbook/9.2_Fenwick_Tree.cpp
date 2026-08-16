#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
#define endl '\n'
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e6;

class FenwickTree{
    private:
    vi tree;
    int n;

  public:
     FenwickTree(int size){
        n = size;
        tree.assign(n+1,0);
     }
     void build(vi &arr){
        for(int i=0; i<n; i++){
        tree[i+1] += arr[i];
        int j = i+1 +(i+1 & -(i+1));
        if(j<=n) tree[j] += tree[i+1];

        }

     }

     void add(int k, int val){
        k++;
        while(k<=n){
            tree[k] += val;
            k += k& -k;
        }
     }

     int  prefixSum(int k){
        k++;
        int sum = 00;
        while(k>0){
            sum += tree[k];
            k -= k& -k;
        }
        return sum;
     }
     int rangeSum(int a, int b){
        if(a==0) return prefixSum(b);
        return prefixSum(b)-prefixSum(a-1);
     }

     int getValue(int k){
        return rangeSum(k,k);
     }

     void print(){
        cout <<"Fenwick Tree: ";
        for(int i=1; i<=n; i++){
            cout << tree[i] << " ";
        }
        cout << endl;
     }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    FenwickTree ft(n);
    ft.build(a);
    ft.print();
    
    cout <<"\nQueries:\n";
    cout << "sum(2,5) = " << ft.rangeSum(2,5) << endl;
    cout << "sum(0,3)" << ft.rangeSum(0,3) << endl;
    cout << "sum(4,7) = " << ft.rangeSum(4,7) << endl;

    cout <<"\nUpdates:\n";
    cout <<"Add 2 to position 3\n";
    ft.add(3,2);
    ft.print();
    cout <<"sum(2,5) = " << ft.rangeSum(2,5) << endl;

    

    return 0;
}