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

Node* bstfromPreOrder(vector<int> & pre){
    vector<int> in=pre;
    sort(in.begin(),in.end());
    int n= pre.size();
    return build(pre,0,n-1,in,0,n-1);
}

int main(){
vector<int> pre={4,2,1,3,6,5,7};
Node* r =bstfromPreOrder(pre);
displayTree(r);
    return 0;
}