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

void helper(Node* root,vector<int>v,vector<vector<int>> &ans,int sum){
    if(root ==NULL) return;
    if(root->left==NULL&&root->right==NULL) {
        if(root->val==sum){
        v.push_back(root->val);
        ans.push_back(v);}
        return;
    }
    v.push_back(root->val);
    helper(root->left,v,ans,sum-(root->val));
    helper(root->right,v,ans,sum-(root->val));
}

vector<vector<int>> pathSum(Node* root,int targetSum){
    vector<vector<int>> ans;
    vector<int> v;
    helper(root,v,ans,targetSum);
    return ans;
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

int main(){

int arr[]={1,2,3,4,5,-6,INT32_MIN,INT32_MIN,INT32_MIN,-1,8,9};
/*            1
       2             3
    4      5      -6     N
 N   N  -1   8  9


*/
int n= sizeof(arr)/sizeof(arr[0]);

Node* root =ConstructTree(arr,n);
vector<vector<int>> r=pathSum(root,7);
for(auto e: r){
    cout<<"{";
    for(auto k:e){
        cout<<k<<" ";
    }
    cout<<"}";
}


    return 0;
}