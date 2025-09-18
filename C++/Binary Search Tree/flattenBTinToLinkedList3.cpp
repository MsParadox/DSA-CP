//by Morris traversal
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
  Node* curr = root;
 while(curr!=NULL){
  if(curr->left!=NULL){
    //save the right
    Node* r=curr->right;
    curr->right= curr->left;

    //finding pred
    Node* pred = curr->left;
    while(pred->right!=NULL) pred = pred->right;

    //link
    pred->right =r;
    curr=curr->left;
  }
  else curr =curr->right;
 }
 Node* temp =root;
 while(temp->right!=NULL){
  temp->left =NULL;
  temp =temp->right;
 }

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