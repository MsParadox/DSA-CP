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

Node* helper(Node* root){
    while (root->right!=NULL)
    { root=root->right;
    } 
    return root;
}
Node* InorderPredecessor(Node* root){
    if(root->left==NULL) return NULL;
    return helper(root->left);
}

Node* helper2(Node* root){
    while (root->left!=NULL)
    { root=root->left;
    } 
    return root;
}
Node* InorderSuccessor(Node* root){
    if(root->right==NULL) return NULL;
    return helper2(root->right);
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
Node* r=InorderPredecessor(d);
cout<<r->val<<endl;
Node* k=InorderSuccessor(d);
cout<<k->val;
    return 0;
}