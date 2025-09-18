#include<iostream>
#include<vector>
using namespace std;

//T O(n) and S O(h)
class Node{
  public:
  int data;
  vector<Node*> childeren;
  Node(int data){
    this->data=data;
  }
};

void preOrderTraversal(Node* root){
  if(root ==NULL) return;
  cout<<root->data<<" ";
   for(Node* child:root->childeren){
    preOrderTraversal(child);
  }
  return;
}

void justGreaterNode(Node* root,int x,Node* &ans){
  if(root==NULL) return;
  if(root->data>x &&(ans ==NULL || root->data <ans->data)){
    ans =root;
  }
  
  for(Node* child:root->childeren){
    justGreaterNode(child,x,ans);
  }
}


int main (){
  //                    20
  //          8                     22
  //     4        12        
 //            10     14
  Node* root =new  Node(20);
  root->childeren.push_back(new Node(8));
  root->childeren.push_back(new Node(22));
  root->childeren[0]->childeren.push_back(new Node(4));
  root->childeren[0]->childeren.push_back(new Node(12));
  root->childeren[0]->childeren[1]->childeren.push_back(new Node(10));
   root->childeren[0]->childeren[1]->childeren.push_back(new Node(14));
  preOrderTraversal(root);
  cout<<endl;
  
  int x=10;
  Node* ans=NULL;
  justGreaterNode(root,x,ans);
  cout<<endl<<"Ans-";
  if(ans==NULL) cout<<"NULL";
  else cout<<ans->data;
  return 0;
  
}