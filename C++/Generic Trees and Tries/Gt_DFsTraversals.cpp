#include<iostream>
#include<vector>
using namespace std;

class Node{
  public:
  char data;
  vector<Node*> childeren;
  Node(char data){
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

void inOrderTraversal(Node* root){
  if(root ==NULL) return;
  int childNodes =root->childeren.size();
  for(int i =0;i<childNodes-1;i++){
    inOrderTraversal(root->childeren[i]);
  }
  cout<<root->data<<" ";
  if(childNodes>0){
    inOrderTraversal(root->childeren[childNodes-1]);
  }
}

void postOrderTraversal(Node* root){
  if(root ==NULL) return;
   for(Node* child:root->childeren){
    postOrderTraversal(child);
  }
  cout<<root->data<<" ";
  return;
}

int main (){
  //            A
  //    B             C        D
  //E       F                      G
 
  Node* root =new  Node('A');
  root->childeren.push_back(new Node('B'));
  root->childeren.push_back(new Node('C'));
  root->childeren.push_back(new Node('D'));
  root->childeren[0]->childeren.push_back(new Node('E'));
  root->childeren[0]->childeren.push_back(new Node('F'));
  root->childeren[2]->childeren.push_back(new Node('G'));
  preOrderTraversal(root);
  cout<<endl;
  inOrderTraversal(root);
  cout<<endl;
  postOrderTraversal(root);
  return 0;
  
}