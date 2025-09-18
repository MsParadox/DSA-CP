//by recursion
#include<iostream>
#include<vector>
#include<stack>
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

void flatten(Node* root){
  if(root==NULL) return;
  Node* l = root->left;
  Node* r =root->right;
  root->left =NULL;
  root->right=NULL;
  flatten(l);
  flatten(r);
  root->right=l;
  Node* temp =root;
  while(temp->right!=NULL) temp =temp->right;
  temp->right=r;
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
cout<<b->right->val;
cout<<b->left->val;
flatten(d);
cout<<endl;
displayTree(d);
cout<<endl;
cout<<b->right->val;
cout<<b->left->val;
    return 0;
}