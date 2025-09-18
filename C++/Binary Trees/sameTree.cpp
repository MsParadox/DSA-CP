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


bool isSameTree(Node* p,Node* q){
    if(p==NULL&&q==NULL) return true;
    if(p==NULL||q==NULL) return false;
    
    if(p->val!=q->val) return false;

    bool leftans= isSameTree(p->left,q->left);
    if(leftans==false) return false;

    bool rightans= isSameTree(p->right,q->right);
    if(rightans==false) return false;

    return true;

}
int main(){
//First tree
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

//Second tree
Node* h =new Node(1);
Node* i =new Node(2);
Node* j =new Node(3);
Node* k =new Node(4);
Node* l =new Node(5);
Node* m =new Node(6);
Node* n =new Node(7);

h->left=i;
h->right=j;
i->left=k;
i->right=l;
j->left=m;
j->right=n;


displayTree(a);
cout<<endl;
displayTree(h);
cout<<endl<<isSameTree(a,h);
    return 0;
}