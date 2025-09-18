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

int sum=0;

void reverseInorder(Node* root){
if(root ==NULL) return;
reverseInorder(root->right);
root->val+=sum;
sum =root->val;
reverseInorder(root->left);
}

Node* bstToGst(Node* root){
    reverseInorder(root);
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

d->left=b;
d->right=f;
b->left=a;
b->right=c;
f->left=e;
f->right=g;

displayTree(d);
cout<<endl;
bstToGst(d);
displayTree(d);
    return 0;
}