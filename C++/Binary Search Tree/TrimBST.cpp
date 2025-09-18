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

void trim(Node* root,int lo,  int hi){
    if(root==NULL) return;
    while(root->left!=NULL){
        if     (root->left->val<lo)        root->left=root->left->right;
        else if(root->left->val>hi)        root->left=root->left->left;
        else break;
        }

    while(root->right!=NULL){
        if     (root->right->val>hi)        root->right=root->right->left;
        else if(root->right->val<lo)        root->right=root->right->right;
        else break;
        }    

    trim(root->left,lo,hi);
    trim(root->right,lo,hi);    
}
Node* trimBST (Node* root, int lo,int hi){
    Node* dummy = new Node(INT32_MAX);
    dummy->left =root;
    trim(dummy,lo,hi);
    return dummy->left;
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
Node* r=trimBST(d,2,6);
cout<<r->val<<endl;
displayTree(d);
    return 0;
}