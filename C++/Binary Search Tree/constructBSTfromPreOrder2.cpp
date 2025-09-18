#include<iostream>
#include<vector>
#include<algorithm>
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

Node* bstfromPreOrder(vector<int> & pre){
    Node* root =new Node(pre[0]);
    for (int i = 1; i <pre.size(); i++)
    {
        insertInToBST(root,pre[i]);
    }
    return root;
}

int main(){
vector<int> pre={4,2,1,3,6,5,7};
Node* r =bstfromPreOrder(pre);
displayTree(r);
    return 0;
}