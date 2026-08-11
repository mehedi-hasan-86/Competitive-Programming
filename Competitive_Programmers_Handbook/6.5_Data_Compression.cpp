#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;

struct Node{
    char ch;
    int freq;
    Node* left;
    Node* right;

    Node(char c , int f){
        ch = c;
        freq = f;
        left = right = nullptr;
    }
};

// Min-heap comparator
struct Compare{
    bool operator()(Node* a, Node* b){
        return a->freq > b->freq;
    }
};


void printCodes(Node* root, string code, map<char, string> &codes){
    if(!root) return;

    if(!root->left && !root->right){
        codes[root->ch] = code;
        cout << root->ch << ": " << code << endl;
        return;
    }
    printCodes(root->left, code +"0", codes);
    printCodes(root->right, code+"1", codes);
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string text = "AABACDACA";
    map<char,int> freq;
    for(char c : text){
        freq[c]++;
    }

    cout <<"Character frequenceis:\n";
    for(auto p : freq){
        cout <<p.first << ": " << p.second << endl;
    }
    cout << endl;
    priority_queue<Node*, vector<Node*>, Compare> pq;
    for(auto p : freq){
        pq.push(new Node(p.first, p.second));
    }

    while(pq.size()>1){
        Node* left = pq.top(); pq.pop();
        Node* right = pq.top(); pq.pop();

        Node* parent =  new Node('$', left->freq + right->freq);
        parent->left = left;
        parent->right = right;

        pq.push(parent);
    }

    Node* root = pq.top();
    map<char, string> codes;

    cout <<"Huffman codes : \n";
    printCodes(root, "", codes);

    

    return 0;
}