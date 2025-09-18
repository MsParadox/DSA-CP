#include<iostream>
#include<vector>

using namespace std;

class Node{
public:
int val;
vector<Node*> neighbours;
Node(){
    val =0;
    neighbours = vector<Node*> ();
}

Node(int _val){
    val =_val;
    neighbours = vector<Node*> ();
}

Node(int _val,vector<Node*> _neighbours){
    val =_val;
    neighbours = _neighbours;
}
};

vector<Node*> nodeRegister;

void dfs(Node* actual ,Node* clone){
    for(auto neighbor : actual->neighbours){
        if(! nodeRegister[neighbor->val]){
            //create the  neighbor first time
            Node* newNode= new Node(neighbor->val);
            nodeRegister[newNode->val] =newNode;
            clone->neighbours.push_back(newNode);
            dfs(neighbor,newNode);
        }
        else{
        clone->neighbours.push_back(nodeRegister[neighbor->val]);
      }
    }
}
Node* cloneGraph(Node* node){
    if(node==NULL) return NULL;
    Node* clone = new Node(node->val);
    nodeRegister.resize(110,NULL);//array contains ref(address) to created nodes
    nodeRegister[clone->val] =clone;
    dfs(node,clone);
    return clone;
}



int main(){ 


    return 0;
}