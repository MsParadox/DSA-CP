#include<iostream>
#include<climits>
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

long long maxTree(Node* root){
    if(root==NULL) return LLONG_MIN;
    return max((long long)(root->val),max(maxTree(root->left),maxTree(root->right)));
}

long long minTree(Node* root){
    if(root==NULL) return LLONG_MAX;
    return min((long long)(root->val),min(minTree(root->left),minTree(root->right)));
}
bool isValidBST(Node* root){
    if(root==NULL) return true;
    else if((long long)(root->val)<=maxTree(root->left)) return false;
    else if((long long)(root->val)>=minTree(root->right)) return false;
    return isValidBST(root->left) && isValidBST(root->right);
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