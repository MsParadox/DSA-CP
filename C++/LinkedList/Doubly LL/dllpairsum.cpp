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
  vector<int > pairsum ( Node* head , Node* tail, int x){
    vector<int > ans ( 2 , -1);
    while ( head != tail){
      int sum = head->val+ tail-> val;
      if(sum == x){
        ans[0]= head->val;
        ans [1]= tail->val;
        return ans;
      }
      if(sum >x){
        tail = tail -> prev;
      }else {
        head = head -> next;
      }
    }return ans;

  }

 
     int main (){
      
    
      DoublyLinkedlist dll;
      
      dll.insertAtStart(7);
      dll.insertAtStart(4);   
      dll.insertAtStart(3); 
      dll.insertAtStart(2); 
      dll.insertAtStart(1);
      dll.display();
   vector <int > ans = pairsum( dll.head,dll.tail, 3);
    cout<< ans[0]<<" "<<ans[1] ;
    return 0;
}