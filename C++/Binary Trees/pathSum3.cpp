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

void helper(Node* root,long long sum,int& count){
    if(root ==NULL) return;
    if((long long)root->val==sum){
        count++;
        }
    helper(root->left,sum-(long long)(root->val),count);
    helper(root->right,sum-(long long)(root->val),count);
}

int pathSum(Node* root,int targetSum){
    if(root==NULL) return 0;
    int count =0;
    helper(root,(long long)targetSum ,count);
    count+=(pathSum(root->left,targetSum)+pathSum(root->right,targetSum));
    return count;
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

int arr[]={1,2,3,4,5,-5,INT32_MIN,INT32_MIN,INT32_MIN,-1,8,9};
/*            1
       2             3
    4      5      -5     N
 N   N  -1   8  9
*/
int n= sizeof(arr)/sizeof(arr[0]);

Node* root =ConstructTree(arr,n);
cout<<pathSum(root,7);
    return 0;
}