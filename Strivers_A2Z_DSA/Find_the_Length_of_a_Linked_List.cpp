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

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

class Solution{
    public:
    int lenghtOfLinkedlist(Node* head){
        int cnt = 0;

        Node* temp = head;
        while(temp != nullptr){
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    Solution obj;
    cout << obj.lenghtOfLinkedlist(head) << endl;

    return 0;
}