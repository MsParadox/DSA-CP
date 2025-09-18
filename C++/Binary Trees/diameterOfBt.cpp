//BY using Global Variable
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

//global variable
int maxdia=0;

void displayTree(Node* root){
if(root ==NULL) return;
cout<<root->val<<" ";
displayTree(root->left);
displayTree(root->right);
}

int levels(Node* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}

int helper(Node* root){
if(root==NULL) return 0;
int dia =levels(root->left)+levels(root->right);
maxdia=max(maxdia,dia);
helper(root->left);
helper(root->right);
return maxdia;
}

int diameterOfBinaryTree(Node* root){
maxdia=0;//reinitialise
return helper(root);
}
int main(){

Node* a =new Node(4);
Node* b =new Node(-7);
Node* c =new Node(-3);
Node* d =new Node(-9);
Node* e =new Node(-3);
Node* f =new Node(9);
Node* g =new Node(-2);
Node* h =new Node(-6);
Node* i =new Node(5);
Node* j =new Node(-7);
Node* k =new Node(-8);
Node* l =new Node(-7);
Node* m =new Node(9);
Node* n =new Node(-7);
Node* o =new Node(-8);
Node* p =new Node(1);
Node* q =new Node(1);
Node* r =new Node(2);
Node* s =new Node(3);

a->left=b;
a->right=c;
c->left=d;
c->right=e;
e->left=s;
d->left=f;
d->right=g;
f->left=h;
h->left=i;
i->right=j;
h->right=k;
k->left=l;
g->left=m;
m->left=n;
g->right=o;
o->left=p;
p->left=q;



displayTree(a);
cout<<endl;
cout<<diameterOfBinaryTree(a);
    return 0;
}