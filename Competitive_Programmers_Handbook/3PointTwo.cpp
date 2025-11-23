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

    vector<int> v = {4,2,3,5,8,3};
    sort(v.begin(), v.end());
    print(v);
    cout << endl;
    sort(v.rbegin(), v.rend());
    print(v);

    int n = 7;
    int a[] = {4,2,5,3,5,8,3};
    sort(a,a+n);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    string s = "monkey";
    sort(s.begin(), s.end());
    cout << s << endl;

    vector<pair<int,int>> r;
    r.push_back({1,5});
    r.push_back({2,3});
    r.push_back({1,2});
    sort(r.begin(), r.end());

    for(auto i: r){
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    vector<tuple<int,int,int>> t;
    t.push_back({2,1,4});
    t.push_back({1,5,3});
    t.push_back({2,1,3});
    sort(t.begin(), t.end());

    for(auto i : t){
        cout << get<0>(i) << " "
             << get<1>(i) << " "
             << get<2>(i) << " " ;
        cout << endl;
    }





    return 0;
}