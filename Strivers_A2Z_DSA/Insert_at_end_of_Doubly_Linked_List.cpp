#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back=  back1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArr2DLL(vi arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}

Node* insertAtTail(Node* head, int k){
    Node* newNode = new Node(k);

    if(head == nullptr){
        return newNode;
    }

    Node* tail = head;
    while(tail->next != nullptr){
        tail = tail->next;
    }
    tail->next =newNode;
    newNode->back = tail;
    return head;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vi arr = {12,5,8,7,4};

    Node* head = convertArr2DLL(arr);

    print(head);
    cout << endl;

    head = insertAtTail(head,10);
    print(head);

    return 0;
}