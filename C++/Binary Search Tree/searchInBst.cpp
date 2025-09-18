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

//T best O(logn), worst O(n) ,avg O(h)   and S same as t 
Node*  searchBST(Node* root,int val){
if(root ==NULL||root->val==val) return root;
else if(root->val>val) return searchBST(root->left,val);
else return searchBST(root->right,val);
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
Node * r=searchBST(d,6);
cout<<endl<<r->val<<endl;
displayTree(r);
    return 0;
}