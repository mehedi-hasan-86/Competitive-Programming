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
    int val;
    Node* left;
    Node* right;
    Node(int v){
        val = v;
        left = right = nullptr;
    }
};

Node* buildTree(vector<int> &preorder, vector<int> &inorder, int preStart, int preEnd,int inStart, int inEnd, unordered_map<int,int> &inMap){
    if(preStart> preEnd || inStart > inEnd) return nullptr;

    int rootVal = preorder[preStart];
    Node* root = new Node(rootVal);

    int inRoot = inMap[rootVal];
    int leftTreeSize = inRoot - inStart;

    root->left = buildTree(preorder, inorder, preStart + 1, preStart+ leftTreeSize, inStart, inRoot-1, inMap);
    root->right = buildTree(preorder, inorder, preStart+leftTreeSize+1, preEnd, inRoot+1, inEnd, inMap);
    return root;
}

void preorderTraversal(Node* root){
    if(!root) return;
    cout << root->val << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Node* root){
    if(!root) return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}


void postorderTraversal(Node* root){
    if(!root) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->val << " ";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> preorder(n),inorder(n);
    
    for(int i=0; i<n; i++) cin >> preorder[i];
    for(int i=0; i<n; i++) cin >> inorder[i];

    unordered_map<int,int> inMap;
    for(int i=0; i<n; i++) inMap[inorder[i]] = i;

    Node* root = buildTree(preorder, inorder, 0, n-1, 0, n-1, inMap);

    cout << "Pre-order: ";
    preorderTraversal(root);
    cout << endl;
    
    cout <<"In-order: ";
    inorderTraversal(root);
    cout << endl;

    cout <<"Post-order: ";
    postorderTraversal(root);
    cout << endl;

    

    return 0;
}