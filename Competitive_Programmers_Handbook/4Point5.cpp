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

    bitset<10> s;
    s[1]=1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;
    cout << s[4] << endl; // 1
    cout << s[5]  << endl; // 0
    cout << s << endl;

    bitset<10> ss(string("00100111010")); // from right to left
    cout << ss[4] << endl; // 1
    cout << ss[5] << endl; // 0
    cout << ss << endl;

    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));
    cout << (a&b) << endl;
    cout << (a|b) << endl;
    cout << (a^b) << endl;

    deque<int> d;
    d.push_back(5); // 5
    d.push_back(2); // 5 2
    d.push_back(3); // 5 2 3
    d.pop_back(); //5 2
    d.pop_front(); //  2


    stack<int> sss;
    sss.push(3);
    sss.push(2);
    sss.push(5);
    cout << sss.top() << endl; // 5
    sss.pop();
    cout << sss.top() << endl; // 2

    queue<int> q;
    q.push(3);
    q.push(2);
    q.push(5);
    cout << q.front() << endl; // 3
    q.pop();
    cout << q.front() << endl;

    priority_queue<int> pq;
    pq.push(3);
    pq.push(5);
    pq.push(7);
    cout << pq.top() << endl; // 7
    pq.pop(); 
    pq.push(6);
    cout << pq.top() << endl; // 6
    pq.pop();
    priority_queue<int,vector<int>, greater<int>>q;
    
    


    return 0;
}