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

    int n;
    cin >> n;

    lli total_sum =  n*1LL*(n+1)/2;
    if(total_sum %2 == 1){
        cout << "NO" << endl;
        return 0;
    }
    
    cout <<"YES" << endl;
    vi a;
    vi visited(n+1,0);
    lli sum = 0;
    lli target_sum = total_sum/2;
    for(int i=n; i>=1; i--){
        sum +=i;
        if(target_sum >=sum){
            a.push_back(i);
            visited[i] = 1;
        }
    }
    lli a_sum = accumulate(a.begin(), a.end(),0LL);
    if(a_sum != target_sum){
        a.push_back(target_sum - a_sum);
        visited[target_sum-a_sum] = 1;
    }

    vi b;
    for(int i=1; i<=n; i++){
        if(visited[i]==0){
            b.push_back(i);
        }
    }

    cout << a.size() << endl;
    for(auto i : a){
        cout << i << " ";
    }
    cout << endl;

    cout << b.size() << endl;
    for(auto i : b){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}