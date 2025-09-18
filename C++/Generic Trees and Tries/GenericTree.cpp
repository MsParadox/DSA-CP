//GENERIC TREE Or N-ary Tree
//every node has data and list of
//references to its childeren nodes(any number)
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
int main (){
  Node* root =new  Node('A');
  root->childeren.push_back(new Node('B'));
  root->childeren.push_back(new Node('C'));
  cout <<root->data<<endl;
  cout<<"childeren of A: ";
  for(Node* child:root->childeren){
    cout<<child->data<<" ";
  }
  
  return 0;
  
}