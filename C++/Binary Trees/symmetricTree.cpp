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

bool helper(Node* p ,Node* q){
    if(p==NULL&&q==NULL) return true;
    if(p==NULL||q==NULL) return false;
    
    if(p->val!=q->val) return false;

    bool leftans= helper(p->left,q->right);
    if(leftans==false) return false;

    bool rightans= helper(p->right,q->left);
    if(rightans==false) return false;

    return true;
}
bool isSymmetric(Node* root){
    
    return helper(root->left,root->right);
}
int main(){

Node* a =new Node(1);
Node* b =new Node(2);
Node* c =new Node(2);
Node* d =new Node(3);
Node* e =new Node(4);
Node* f =new Node(4);
Node* g =new Node(3);

a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;

displayTree(a);
cout<<endl;
cout<<isSymmetric(a);
    return 0;
}