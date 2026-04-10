#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;
 void print(vi &v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
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
    sort(a.begin(), a.end()); // sort(a, a+n)
    print(a); 
    reverse(a.begin(), a.end()); //reverse(a,a+n)
    print(a);
    random_shuffle(a.begin(), a.end()); // random_shuffle(a,a+n)
    print(a);

    set<int> s;
    set<int> :: iterator it = s.begin();
    // auto it = s.begin();
    cout << *it << endl;

    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << endl;
    }
    auto it = s.end(); it--;
    cout << *it << endl;

    int x;
    cin >> x;
    auto it = s.find(x);
    if(it==s.end()){
        // x is not found
    }

    auto it = s.lower_bound(x);
    if(it == s.begin()){
        cout << *it <<endl;
    }else if(it == s.end()){
        it--;
        cout << *it << endl;
    }else{
        int a = *it; it--;
        int b = *it;
        if(x-b < a-x) cout << b << endl;
        else cout << a << endl;

    }

    


    return 0;
}