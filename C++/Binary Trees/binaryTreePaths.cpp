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

void helper(Node* root,string s,vector<string> &ans){
    if(root ==NULL) return;
    string a=to_string(root->val);
    if(root->left==NULL&&root->right==NULL) {
        s+=a;
        ans.push_back(s);
        return;
    }
    helper(root->left,s+a+"->",ans);
    helper(root->right,s+a+"->",ans);
}

vector<string> binaryTreePaths(Node* root){
    vector<string> ans;
    helper(root,"",ans);
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

displayTree(a);
cout<<endl;
vector<string> r=binaryTreePaths(a);
for(auto e:r){
    cout<<"{"<<e<<"}, ";
}
    return 0;
}