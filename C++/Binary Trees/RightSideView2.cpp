#include<iostream>
#include<queue>
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

Node* ConstructTree(int arr[],int n){
 queue<Node*> q;
 Node * root =new Node(arr[0]);
 q.push(root);
 int i=1;
 int j=2;
 while(q.size()>0&& i<n){
    Node* temp =q.front();
    q.pop();
    Node* l;
    Node* r;
    if(arr[i]!=INT32_MIN) l =new Node(arr[i]);
    else l=NULL;
    if(j!=n&&arr[j]!=INT32_MIN) r =new Node(arr[j]);
    else r=NULL;
    
    temp->left =l;
    temp->right =r;

    if(l!=NULL) q.push(l);
    if(r!=NULL) q.push(r);
 
    i+=2;
    j+=2;
 }
 return root;
}

int levels(Node* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}

void preOrder(Node* root ,vector<int> &ans,int level){
if(root ==NULL) return;

    ans[level]=root->val;
 preOrder(root->left,ans,level+1); 
 preOrder(root->right,ans,level+1);
}


vector<int> rightSideView(Node* root){
    vector<int> ans(levels(root),0);
    preOrder(root,ans,0);
    return ans;
}
int main(){//for lhs view swap recursion line in preorder

int arr[]={1,2,3,4,5,6,INT32_MIN,INT32_MIN,INT32_MIN,7,8,9};
int n= sizeof(arr)/sizeof(arr[0]);
//rhs view 1 3 6 9
Node* root =ConstructTree(arr,n);
cout<<endl;
vector<int> r =rightSideView(root);
for(auto e:r){
    cout<<e<<" ";
}
    return 0;
}