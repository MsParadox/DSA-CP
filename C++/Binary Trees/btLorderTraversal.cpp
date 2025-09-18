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


//by DFS
int levels(Node* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}

void nthLevel(Node* root ,int curr,int level,vector<int> &v){
if(root ==NULL) return;
if(curr ==level) {
    v.push_back(root->val);
    return;//optimised
}
 nthLevel(root->left,curr+1,level,v); 
 nthLevel(root->right,curr+1,level,v);
}

void lOrder(Node* root, vector<vector<int>> &ans){
    int n=levels(root);
    for (int i = 1; i <=n; i++)
    {  vector<int> v;
        nthLevel(root,1,i,v);
        ans.push_back(v);
        cout<<endl;
    }
}

vector<vector<int>> levelOrder(Node* root){
    vector<vector<int>> ans;
    lOrder(root,ans);
    return ans;
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

vector<vector<int>> r =levelOrder(a);
for(auto e:r){
  cout<<"{";
  for(int i=0;i<e.size();i++){
    cout<<e[i]<<" ";
  }
  cout<<"},";
}
    return 0;
}