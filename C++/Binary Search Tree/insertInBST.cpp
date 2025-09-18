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
Node* insertInToBST(Node* root,int val){
if(root ==NULL) return new Node(val);
else if(root->val>val){
        if(root->left==NULL){
            root->left=new Node(val);
        }

        else insertInToBST(root->left,val);
}
else{
        if(root->right==NULL){
            root->right=new Node(val);
        }

        else insertInToBST(root->right,val);
}
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
insertInToBST(d,-1);
cout<<endl;
displayTree(d);
insertInToBST(d,9);
cout<<endl;
displayTree(d);
    return 0;
}