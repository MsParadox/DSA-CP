#include<iostream>
using namespace std;

class  Node {
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

int sum(Node* root){
    if(root==NULL) return 0;
    return root->val+sum(root->left)+sum(root->right);
}

int product(Node* root){
    if(root==NULL) return 1;
    return (root->val)*product(root->left)*product(root->right);
}

int size(Node* root){
    if(root==NULL) return 0;
    return 1+size(root->left)+size(root->right);
}

int edges(Node* root){
    return size(root)-1;
}

int maxInTree(Node* root){
    if(root==NULL) return INT32_MIN;
    return max(root->val,max(maxInTree(root->left),maxInTree(root->right)));
}

int minInTree(Node* root){
    if(root==NULL) return INT32_MAX;
    return min(root->val,min(minInTree(root->left),minInTree(root->right)));
}

int levels(Node* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}

int height(Node* root){
    return levels(root)-1;
}
bool find(Node* root,int target){
    if(root==NULL) return false;
    if(root->val==target) return true;
    return find(root->left,target) ||find(root->right,target);
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
cout<<endl;
cout<<sum(a);
cout<<endl;
cout<<product(a);
cout<<endl;
cout<<size(a);
cout<<endl;
cout<<edges(a);
cout<<endl;
cout<<maxInTree(a);
cout<<endl;
cout<<minInTree(a);
cout<<endl;
cout<<levels(a);
cout<<endl;
cout<<height(a);
cout<<endl;
cout<<find(a,5);

    return 0;
}