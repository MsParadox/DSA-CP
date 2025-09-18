#include<iostream>
#include<vector>
using namespace std;


class Node {
  public:
    int val;
    Node* prev;
    Node* next ;

         Node (int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
};
 class DoublyLinkedlist{

public:
  Node* head ;
  Node* tail;
  DoublyLinkedlist(){
    head = NULL;
    tail = NULL;


  }
  void insertAtStart ( int value){
    Node* new_node = new Node( value);
    if(head == NULL){
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->next = head;
    head ->prev= new_node;
    head = new_node;
    
  return ;}
    void display (){
      Node* temp = head;
      
      while ( temp!=NULL){
        cout<<temp->val <<" <-> ";
        temp=temp->next;
      } cout<<endl;
    }

  };
  bool isCriticalpoint ( Node* & curr){
    if( curr ->prev->val< curr->val&& curr-> next->val< curr-> val) {return true;}
     if( curr ->prev->val> curr->val&& curr-> next->val> curr-> val){ return true;}
  
  return false;}
  vector <int> distancebetweencriticalpoint ( Node* head , Node* tail){
   vector<int> ans(2, INT32_MAX);
   int firstCP = -1 , lastCP = -1;
   Node* curr = tail->prev;
   if( curr ==NULL){
    ans[0 ]=ans[1]= -1;
    return ans;
   }
   int currpos =0;
 while ( curr -> prev!= NULL){
  if( isCriticalpoint(curr)){
    if (firstCP==-1){
      firstCP = lastCP=currpos;
    }
    else { ans[0]= min(ans[0] ,currpos - lastCP);
    ans[1]=currpos-firstCP;
    lastCP = currpos;}
  }
  currpos++;
  curr=curr->prev;
 }
 if(ans[0]==INT32_MAX){
  ans[0]=ans[1]=-1;
 }
 return ans;
  }
 
     int main (){
      
    
      DoublyLinkedlist dll;
      
      dll.insertAtStart(1);
      dll.insertAtStart(3);   
      dll.insertAtStart(2); 
      dll.insertAtStart(1); 
      dll.insertAtStart(5);
      dll.insertAtStart(2);
      dll.insertAtStart(6);
      dll.display();
      vector<int> ans =distancebetweencriticalpoint(dll.head,dll.tail);
    cout<<"["<<ans[0]<<","<<ans[1]<<"]";
    return 0;
}