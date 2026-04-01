#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;




// Class representing a node is Double Linked List
class Node{
    public:

    // stores data of the node
    int data;

    // Pointer to  the next node
    Node* next;

    // Pointer to the previous node
    Node* prev;

    // Constructor when data, next and prev are provided
    Node(int data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }

    // Constructor when only data is provided
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    // Initializing an array to create nodes
    vi arr = {2,5,8,7};

    // Creating the head node of the double linked list
    Node* head=  new Node(arr[0]);

    // Printing the address of the head node
    cout << head << endl;

    // Printing the data stored in head node
    cout << head->data << endl;

    return 0;
}