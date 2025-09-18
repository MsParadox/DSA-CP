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

//t O(n) 
void preorder(Node* root){
if(root ==NULL) return;
cout<<root->val<<" ";//work
preorder(root->left);//call 1
preorder(root->right);//call 2
}

void inorder(Node* root){
if(root ==NULL) return;
inorder(root->left);
cout<<root->val<<" ";
inorder(root->right);
}

void postorder(Node* root){
if(root ==NULL) return;
postorder(root->left);
postorder(root->right);
cout<<root->val<<" ";
}


void prereverseorder(Node* root){
if(root ==NULL) return;
cout<<root->val<<" ";//work
prereverseorder(root->right);//call 2
prereverseorder(root->left);//call 1
}

void inreverseorder(Node* root){
if(root ==NULL) return;
inreverseorder(root->right);
cout<<root->val<<" ";
inreverseorder(root->left);
}

void postreverseorder(Node* root){
if(root ==NULL) return;
postreverseorder(root->right);
postreverseorder(root->left);
cout<<root->val<<" ";
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
cout<<"Preorder :-"<<endl;
preorder(a);
cout<<endl;
cout<<"Inorder :-"<<endl;
inorder(a);
cout<<endl;
cout<<"Postorder :-"<<endl;
postorder(a);
cout<<endl;
cout<<"Prereverseorder :-"<<endl;
prereverseorder(a);
cout<<endl;
cout<<"Inreverseorder :-"<<endl;
inreverseorder(a);
cout<<endl;
cout<<"Postreverseorder :-"<<endl;
postreverseorder(a);
cout<<endl;

    return 0;
}