//t O(n) and s O(1)
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

vector<int> morrisTraversal(Node* root){
    vector<int> ans;
    Node* curr =root;
        while(curr!=NULL){
        if(curr->left!=NULL){//find the pred  
            Node* pred=curr->left;
            while(pred->right!=NULL&& pred->right!=curr){
                pred=pred->right;
            }
            if(pred->right==NULL){//link
                pred->right =curr;
                curr=curr->left;
            }
            else{//pred-> right ==curr : Unlink
                pred->right=NULL;
                ans.push_back(curr->val);
                curr=curr->right;
            }
        }
        else{//curr->left ==NULL
            ans.push_back(curr->val);
            curr=curr->right;
        }
        }
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

d->left=b;
d->right=f;
b->left=a;
b->right=c;
f->left=e;
f->right=g;

displayTree(d);
cout<<endl;
vector<int> r= morrisTraversal(d);
for(auto e:r){
    cout<<e<<" ";
}
    return 0;
}