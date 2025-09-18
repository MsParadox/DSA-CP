#include<iostream>
#include<vector>
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

void inOrder(Node*root ,vector<int> &ans ){
    if(root==NULL) return;
    inOrder(root->left,ans);
    ans.push_back(root->val);
    inOrder(root->right,ans);
}
bool isValidBST(Node* root){
    vector<int> ans;
    inOrder(root,ans);
    for(int i =1;i<ans.size();i++){
        if(ans[i]<=ans[i-1]) return false;
    }
    return true;
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
cout<<isValidBST(d);
    return 0;
}