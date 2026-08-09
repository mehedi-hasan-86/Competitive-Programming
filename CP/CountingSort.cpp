#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void counting_sort(vector<int> &arr, int c){
    vi cnt(c+1, 0);

    for(int x : arr){
        cnt[x]++;
    }

    int idx = 0;
    for(int i=0; i<=c; i++){
        while(cnt[i]>0){
            arr[idx++] = i;
            cnt[i]--;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int c = *max_element(a.begin(), a.end());
    counting_sort(a, c);

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }

    return 0;
}