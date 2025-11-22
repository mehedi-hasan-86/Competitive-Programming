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

    /*
    Input and Output More Efficient : 

    ios::sync_with_stdio(false);
    cin.tie(0);
    */

    ios::sync_with_stdio(false);
    cin.tie(0);
    //Solution comes here

    int a, b;
    string x;
    cin >> a >> b >> x; // Input
    cout << a  <<" " << b  << " " << x << "\n"; // Output 

    /*
    "\n" works faster than endl
    */

    string s;
    getline(cin, s); // whole line from the input

    while(cin >> x){ // amount of data is unknown
        //code   
    }

    long long  m= 123456780123456789LL;
    cout << m << endl;

    int y = 123456789;
    long long z = y*y;
    cout << z<< endl; //  -1757895751
     long long w = y*1LL*y;
     cout << w << endl;


    return 0;
}