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

    vector<int> v;
    v.push_back(3); // 3
    v.push_back(2); // 3 2 
    v.push_back(5); // 3 2 5

    cout << v[0] << endl; // 3
    cout <<v[1] << endl; // 2
    cout << v[2] << endl; // 5

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    for(auto x : v){
        cout << x << " ";
    }
    cout << endl;

    vector<int> m(10);// size 10, initial value 0
    vector<int> n(10,5); // size 10, inital value 5

    string a = "hatti";
    string b = a+a;
    cout << b << endl; // hattihatti
    b[5] = 'v';
    cout << b << endl; // hattiviatti

    string c = b.substr(3,4);
    cout << c << endl; // tive



    return 0;
}