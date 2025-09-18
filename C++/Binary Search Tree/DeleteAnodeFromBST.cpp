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

Node* iop(Node* root){
    Node* pred =root->left;
    while(pred->right!=NULL){
        pred=pred->right;
    }
    return pred;
}

Node* ios(Node* root){
    Node* succ =root->right;
    while(succ->left!=NULL){
        succ=succ->left;
    }
    return succ;
}

Node* deleteNode(Node* root,int key){
    if(root==NULL) return NULL;
    if(root->val==key){
        //No child
        if(root->left==NULL && root->right==NULL) return NULL;

        //1 child
        if(root->left==NULL || root->right==NULL){
            if(root->left!=NULL) return root->left;
            else return root->right;
        } 

        //2 child
        if(root->left!=NULL && root->right!=NULL) {
            //replace the root with its inorder pred/succ
            //after replacing ,delete the pred/succ
            Node* pred =iop(root);
            root->val =pred->val;
            root->left=deleteNode(root->left,pred->val);
        }
    }
    else if(root->val>key){
        root->left=deleteNode(root->left,key);}
    else {
        root->right=deleteNode(root->right,key);

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
cout<<endl;
Node* r=deleteNode(d,4);
cout<<r->val<<endl;
displayTree(d);
    return 0;
}