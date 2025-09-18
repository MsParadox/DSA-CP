//by Stack(itrative)
#include<iostream>
#include<vector>
#include<stack>
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

vector<Node*> preorderTraversal(Node* root){
    vector<Node*> ans;
    stack<Node*> st;
    if(root!=NULL) st.push(root);
    while(st.size()>0){
        Node* temp =st.top();
        st.pop();
        ans.push_back(temp);
        if(temp->right!=NULL) st.push(temp->right);
        if(temp->left!=NULL) st.push(temp->left);
    }
    return ans;
}

void flatten(Node* root){
    vector<Node*> ans =preorderTraversal(root);
    int n =ans.size();
    for(int i=0;i<n-1;i++){
        ans[i]->right=ans[i+1];
        ans[i]->left=NULL;
    }
}

int main(){

Node* a =new Node(1);
Node* b =new Node(2);
Node* c =new Node(3);
Node* d =new Node(4);
Node* e =new Node(5);
Node* f =new Node(6);
Node* g =new Node(7);

d->left=b;
d->right=f;
b->left=a;
b->right=c;
f->left=e;
f->right=g;

displayTree(d);
cout<<endl;
cout<<b->right->val;
cout<<b->left->val;
flatten(d);
cout<<endl;
displayTree(d);
cout<<endl;
cout<<b->right->val;
cout<<b->left->val;
    return 0;
}