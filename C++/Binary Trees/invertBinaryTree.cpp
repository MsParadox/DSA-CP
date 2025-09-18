#include<iostream>

using namespace std;
class  Node {//TreeNode in Leetcode
public:
int val;
Node* left;
Node* right;

Node(int val){
    this->val=val;
    this->left=NULL;
    this->right=NULL;
}
};

void displayTree(Node* root){
if(root ==NULL) return;
cout<<root->val<<" ";
displayTree(root->left);
displayTree(root->right);
}

Node* invertTree(Node* root){
    if(root==NULL) return NULL;
    Node* temp =root->left;
    root->left=root->right;
    root->right=temp;
    invertTree(root->left);
    invertTree(root->right);
    return root;
}
int main(){

Node* a =new Node(1);
Node* b =new Node(2);
Node* c =new Node(3);
Node* d =new Node(4);
Node* e =new Node(5);
Node* f =new Node(6);
Node* g =new Node(7);

a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;

displayTree(a);
invertTree(a);
cout<<endl;
displayTree(a);
    return 0;
}