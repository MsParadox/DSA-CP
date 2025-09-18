#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
  public:
  char data;
  vector<Node*> childeren;
  Node(char data){
    this->data=data;
  }
};

void levelOrderTraversal(Node* root){
  if(root ==NULL) return;
  queue<Node*> q;
  q.push(root);
  
  while(!q.empty()){
    int currLevelNodes=q.size();
    while(currLevelNodes--){
      Node* curr =q.front();
      q.pop();
      cout<<curr->data<<" ";
      for(Node* child:curr->childeren){
        q.push(child);
      }
    }
    cout<<endl;
  }
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
  levelOrderTraversal(root);
  cout<<endl;
  
  return 0;
  
}