#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class Solution{
    public:
    Node* deleteTail(Node* head){
        if(head==NULL) return NULL;

        if(head->next==NULL){
            delete head;
            return NULL;
        }

        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->prev->next = NULL;
        delete temp;

        return head;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    Solution obj;
    head = obj.deleteTail(head);

    Node* curr = head;
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }


    return 0;
}