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


//by DFS
int levels(Node* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}

void nthLevel(Node* root ,int curr,int level){
if(root ==NULL) return;
if(curr ==level) {
    cout<<root->val<<" ";
    return;//optimised
}
 nthLevel(root->left,curr+1,level); 
 nthLevel(root->right,curr+1,level);
}

void levelOrder(Node* root){
    int n=levels(root);
    for (int i = 1; i <=n; i++)
    {
        nthLevel(root,1,i);
        cout<<endl;
    }
    
}


void reversenthLevel(Node* root ,int curr,int level){
if(root ==NULL) return;
if(curr ==level) {
    cout<<root->val<<" ";
    return;
}
 reversenthLevel(root->right,curr+1,level);
 reversenthLevel(root->left,curr+1,level); 

}

void rverseLevelOrder(Node* root){
    int n=levels(root);
    for (int i = 1; i <=n; i++)
    {
        reversenthLevel(root,1,i);
        cout<<endl;
    }
    
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
nthLevel(a,1,3);
cout<<endl;
//level order traversal
levelOrder(a);
cout<<endl;
rverseLevelOrder(a);
    return 0;
}