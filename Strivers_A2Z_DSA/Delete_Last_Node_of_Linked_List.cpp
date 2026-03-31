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
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Solution{
    public:
    Node* deleteTail(Node*  head){
        if(head == NULL || head->next==NULL){
            delete head;
            return NULL;
        }

        Node* cur = head;
        while(cur->next->next!= NULL){
            cur = cur->next;
        }

        delete cur->next;
        cur->next = NULL;
        return head;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    Node* head = new Node(1);
    head->next = new Node(2);

    Solution obj;
    head = obj.deleteTail(head);

    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;

    return 0;
}