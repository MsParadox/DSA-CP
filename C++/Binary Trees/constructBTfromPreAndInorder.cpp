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

Node* build(vector<int> &pre,int prelo,int prehi,vector<int> &in,int inlo,int inhi){
    if(prelo>prehi) return NULL;
    Node* root =new Node(pre[prelo]);
    if(prelo==prehi) return root;
        int i=inlo;
        while(i<=inhi){
        if(in[i]==pre[prelo]) break;
        i++;
        }
    
    int leftCount=i-inlo;
    int rightCount =inhi-i;
    root->left =build(pre,prelo+1,prelo+leftCount,in,inlo,i-1);
    root->right =build(pre,prelo+leftCount+1,prehi,in,i+1,inhi);

    return root;
}

Node* buildTree(vector<int>&pre,vector<int> &in){
    int n= pre.size();
    return build(pre,0,n-1,in,0,n-1);
}
int main(){
vector<int> pre ={1,2,4,5,3,6};
vector<int> in ={4,2,5,1,3,6};
Node* root =buildTree(pre,in);

levelOrder(root);
    return 0;
}