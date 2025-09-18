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

bool exists(Node* root,Node* target){
    if(root==NULL) return false;
    if(root==target) return true;
    return exists(root->left,target) ||exists(root->right,target);

}

Node* LCA(Node* root,Node* p,Node* q){
    //3 if returning root so we can put them together in else
    //if(root==p||root==q) return root;
    //else if(exists(root->left,p)&&exists(root->right,q)) return root;
    //else if(exists(root->right,p)&&exists(root->left,q)) return root;
     if(exists(root->left,p)&&exists(root->left,q)) return LCA(root->left,p,q);
    else if(exists(root->right,p)&&exists(root->right,q)) return LCA(root->right,p,q);
    else return root;
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
Node* r=LCA(a,f,g);
cout<<r->val;

    return 0;
}