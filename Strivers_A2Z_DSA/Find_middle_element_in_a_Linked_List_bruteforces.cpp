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

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next= nullptr;
    }
};

Node *findMiddle(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* temp  = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    int mid = cnt/2+1;
    temp = head;

    while(temp != NULL){
        mid = mid-1;

        if(mid==0){
            break;
        }
        temp = temp->next;
    }
    return temp;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    Node* middleNode = findMiddle(head);

    cout << middleNode->data << endl;

    return 0;
}