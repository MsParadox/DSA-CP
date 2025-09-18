#include<iostream>
#include<unordered_map>
using namespace std;

class Node{
  public:
   char data;
   bool terminal;
   unordered_map<char ,Node*> children;
   Node(char data){
     this->data=data;
     this->terminal=false;
     
   }
   void makeTerminal(){
     this->terminal=true;
   }
   bool isTerminal(){
     return this->terminal==true;
   }
};

class Trie{
  public:
  Node* root;
  Trie(){
    root =new Node('\0');
  }
  void insert(string word){
    Node* curr=root;
    for(int i =0;i<word.length();i++){
      char ch =word[i];//curr char need to be checked
      if(curr->children.count(ch)){
        curr=curr->children[ch];
      }
      else{
        Node* child=new Node(ch);
        curr->children[ch]=child;
        curr=child;
      }
    }
    curr->makeTerminal();
  }
  bool search(string word){
     Node* curr=root;
    for(int i =0;i<word.length();i++){
      char ch =word[i];
      if(curr->children.count(ch)){
        curr=curr->children[ch];
      }
      else{
        return false;//we don't have a char
      }
    }
    return curr->isTerminal();
  }
  bool startsWith(string prefix){
    Node* curr=root;
    for(int i =0;i<prefix.length();i++){
      char ch =prefix[i];
      if(curr->children.count(ch)){
        curr=curr->children[ch];
      }
      else{
        return false;//we don't have a char
      }
    }
    return true;
  }
};

int main (){
  
  return 0;
}