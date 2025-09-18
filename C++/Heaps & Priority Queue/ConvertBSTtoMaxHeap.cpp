//For MAX HEAP:- 
//m1: Form an array by doing PRE/IN/POST traversal in bst and then apply heapify of Max heap
//m2: Form Decreasing order sorted array by REVERSE INORDER traversal and fill the bst by LEVEL ORDER traversal
//m3: Form Decreasing order sorted array by REVERSE INORDER traversal and fill the bst by PRE ORDER traversal(LST>RST)

//For MIN HEAP:- 
//m1: Form an array by doing PRE/IN/POST traversal in bst and then apply heapify of Min heap
//m2: Form Increasing order sorted array by  INORDER traversal and fill the bst by LEVEL ORDER traversal
//m3: Form Increasing order sorted array by  INORDER traversal and fill the bst by PRE ORDER traversal (LST<RST)

//For coverting BT to heap, Form an array by doing PRE/IN/POST traversal and then apply  m1 or sort it then m2/m3

#include<iostream>
#include<vector>

using namespace std;
class  Node {
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

void inOrder(Node* root,vector<int> &decSortArr){
if(root ==NULL) return;
inOrder(root->right,decSortArr);
decSortArr.push_back(root->val);
inOrder(root->left,decSortArr);
}

void preOrder(Node* root,vector<int> &decSortArr,int &idx){
if(root ==NULL) return;
root->val=decSortArr[idx++];
preOrder(root->left,decSortArr,idx);
preOrder(root->right,decSortArr,idx);
}

int main(){

Node* a =new Node(10);
Node* b =new Node(5);
Node* c =new Node(16);
Node* d =new Node(1);
Node* e =new Node(8);
Node* f =new Node(12);
Node* g =new Node(20);

a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;

displayTree(a);
vector<int> decSortArr;
inOrder(a,decSortArr);
int i=0;
preOrder(a,decSortArr,i);
cout<<endl;
displayTree(a);
    return 0;
}