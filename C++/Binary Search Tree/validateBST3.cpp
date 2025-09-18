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


void inOrder(Node*root,Node* &prev,bool &flag ){
    if(root==NULL) return;
    inOrder(root->left,prev,flag);
    if(prev!=NULL){
    if(root->val<=prev->val){
        flag =false;
        return;
    }
    }
    prev=root;
    inOrder(root->right,prev,flag);
}
bool isValidBST(Node* root){
    Node* prev =NULL;
    bool flag = true;
    inOrder(root,prev,flag);
    return flag;
    }
int main(){

Node* a =new Node(1);
Node* b =new Node(2);
Node* c =new Node(3);
Node* d =new Node(4);
Node* e =new Node(5);
Node* f =new Node(6);
Node* g =new Node(7);

d->left=b;
d->right=f;
b->left=a;
b->right=c;
f->left=e;
f->right=g;

displayTree(d);
cout<<endl;
cout<<isValidBST(d);
    return 0;
}