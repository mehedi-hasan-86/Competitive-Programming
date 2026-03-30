#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

// Node calss to represent each node in the linked list
class Node {
    public:
    int data; // Data stored in the node
    Node* next; // pointer to the next node

    //Constructor with data and next pointer
    Node(int data1, Node* next1){
        data = data1; 
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};


//Solution class to handle linkedlist operations
class Solution{
    public:
    //Function to insert a new node at the head
    Node* insertAtHead(Node* head, int newData){
        // Create a new node whose next points to current head
        Node* newNode = new Node(newData, head);
        return newNode;
    }

    //Function to print the linked list
    void printList(Node* head){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp->data <<  " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    Solution sol;

    //Creating a sample linked list : 2->3 ->4
    // Node* head = new Node(2);
    // head->next = new Node(3);
    // head->next->next = new Node(4);

    int n;
    cin >> n;

    Node* head= nullptr;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        head = sol.insertAtHead(head,x);
    }
    
    // cout <<"Original List: ";
    // sol.printList(head);

    // head = sol.insertAtHead(head, 1);
    // cout <<"After Insertion at Head : ";

    sol.printList(head);



    return 0;
}