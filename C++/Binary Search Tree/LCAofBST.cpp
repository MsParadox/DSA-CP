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


Node* LCA(Node* root,Node* p,Node* q){
    //3 if returning root so we can put them together in else
    //if(root->val==p->val||root->val==q->val) return root;
    //else if(root->val>p->val&&root->val<q->val) return root;
    //else if(root->val<p->val&&root->val>q->val) return root;
    if(root->val<p->val&&root->val<q->val) return LCA(root->right,p,q);
    else if(root->val>p->val&&root->val>q->val) return LCA(root->left,p,q);
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

d->left=b;
d->right=f;
b->left=a;
b->right=c;
f->left=e;
f->right=g;

Node* r=LCA(d,c,g);
cout<<r->val;

    return 0;
}