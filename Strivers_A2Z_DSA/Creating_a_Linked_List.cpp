#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

class Node {
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next= next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >>n;
    vi a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    Node* y = new Node(a[0]);

    cout << y << endl;
    cout << y->data << endl;


    return 0;
}