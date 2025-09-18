#include<iostream>
#include<vector>
#include<unordered_map>
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

void serializeTree(Node* root,string &ans){
  if(root==NULL) return;
  
  ans+=to_string(root->data)+":"+to_string(root->childeren.size())+":";
  
  for(Node* child:root->childeren){
    ans+=to_string(child->data)+",";
  }
  if(root->childeren.size()) ans.pop_back();//to remove the last ","
  ans+="\n";
  for(Node* child:root->childeren){
    serializeTree(child,ans);
  }
  
  }

Node* DeserializeTreeHelper(int nodevalue,unordered_map<int,string> &mp){
  Node* node=new Node(nodevalue);
  string nodestr =mp[nodevalue];//"2:30,40"
  
  if(nodestr[0]=='0') return node;// leaf Node
  int breakpos=nodestr.find(':');
  int childNodesNumber=stoi(nodestr.substr(0,breakpos));//2
  string childNodesStr=nodestr.substr(breakpos+1);//"30,40"
  
  int start=0;
  for(int i=0;i<childNodesNumber;i++){
    int end=childNodesStr.find(',',start);
    if(end==string::npos) end =childNodesStr.size();
    int childNodesValue=stoi(childNodesStr.substr(start,end));
    node->childeren.push_back(DeserializeTreeHelper(childNodesValue,mp));
    start=end+1;
  }
  return node;
}

Node* DeserializeTree(string serialisedStr){
  if(serialisedStr=="") return NULL;
  
  unordered_map<int,string> mp;//nodevalue->childNodesString
  int start=0;
  for(int i=0;i<serialisedStr.size();i++){
    
    if(serialisedStr[i]=='\n'){
      string nodestr=serialisedStr.substr(start,i-start);//"10:2:30,40"
      int breakpoint1=nodestr.find(':');
      int nodevalue=stoi(nodestr.substr(0,breakpoint1));//10
      mp[nodevalue]=nodestr.substr(breakpoint1+1);//"2:30,40"
      start=i+1;
    }
  }
  int rootNodevalue=stoi(serialisedStr.substr(0,serialisedStr.find(':')));
  return DeserializeTreeHelper(rootNodevalue,mp);
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
  
  string serialisedTree="";
  serializeTree(root,serialisedTree);
  cout<<serialisedTree<<endl;
  
  Node* deserialisedRoot =DeserializeTree(serialisedTree);
  levelOrderTraversal(deserialisedRoot);
  
  return 0;
  
}