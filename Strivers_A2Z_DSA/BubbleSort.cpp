#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void bubbleSort(vi &a){
    int n = a.size();

    for(int i=0; i<n-1; i++){
        bool swaap = false;
        for(int j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
                swaap = true;
            }
        }
        if(!swaap){
            break;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    bubbleSort(a);
    for(auto i: a){
        cout << i <<  " ";
    }
    cout << endl;

    return 0;
}