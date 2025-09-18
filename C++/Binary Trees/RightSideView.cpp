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

void nthLevel(Node* root ,int curr,int level,vector<int> &ans){
if(root ==NULL) return;
if(curr ==level) {
    ans[curr]=root->val;
    return;
}
 nthLevel(root->left,curr+1,level,ans); 
 nthLevel(root->right,curr+1,level,ans);
}

void levelOrder(Node* root, vector<int> &ans){
    int n=ans.size();
    for (int i = 0; i <n; i++)
    {
        nthLevel(root,0,i,ans);
    }
    
}

vector<int> rightSideView(Node* root){
    vector<int> ans(levels(root),0);
    levelOrder(root,ans);
    return ans;
}
int main(){

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