#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

class Node{
  public:
  int data;
  vector<Node*> childeren;
  Node(int data){
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
  
void mirrorTree(Node* root){
    if(root==NULL) return;
    if(root->childeren.size()<2) return;
    reverse(root->childeren.begin(),root->childeren.end());
    for(Node* child:root->childeren){
        mirrorTree(child);
    }
}
   
  int main (){
  //              10
  //    2     34          56       100
  //          1                 7   8   9
 
  Node* root =new  Node(10);
  root->childeren.push_back(new Node(2));
  root->childeren.push_back(new Node(34));
  root->childeren.push_back(new Node(56));
  root->childeren.push_back(new Node(100));
  root->childeren[1]->childeren.push_back(new Node(1));
  root->childeren[3]->childeren.push_back(new Node(7));
  root->childeren[3]->childeren.push_back(new Node(8));
  root->childeren[3]->childeren.push_back(new Node(9));
  levelOrderTraversal(root);
  mirrorTree(root);
  cout<<endl;
  levelOrderTraversal(root);
  
  return 0;
  
}