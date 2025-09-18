#include<iostream>
#include<queue>
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

void leftBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL&&root->right==NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);
}

void bottomBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL&&root->right==NULL) cout<<root->val<<" ";;
    
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}

void rightBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL&&root->right==NULL) return;
    rightBoundary(root->right);
    if(root->right==NULL) rightBoundary(root->left);
    cout<<root->val<<" ";
}
void boundary(Node* root){
    leftBoundary(root);
    bottomBoundary(root);
    rightBoundary(root->right);
}


int main(){

int arr[]={1,2,3,4,5,INT32_MIN,6,7,INT32_MIN,8,INT32_MIN,9,10,INT32_MIN,11,INT32_MIN,12,INT32_MIN,13,INT32_MIN,14,15,16,INT32_MIN,17,INT32_MIN,INT32_MIN,18,INT32_MIN,19,INT32_MIN,INT32_MIN,INT32_MIN,20,21,22,23,INT32_MIN,24,25,26,27,INT32_MIN,INT32_MIN,28,INT32_MIN,INT32_MIN};
int n= sizeof(arr)/sizeof(arr[0]);

Node* root =ConstructTree(arr,n);
levelOrder(root);
cout<<endl;
boundary(root);

    return 0;
}