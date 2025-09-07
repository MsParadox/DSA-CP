#include<iostream>

using namespace std;


struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
     ListNode* merge =new ListNode(-1);
     ListNode* temp =merge;
     ListNode* p2 =list1;
     ListNode* p3 =list2;
      while(p2 &&p3){
        if(p2->val<p3->val){
            temp->next=p2;
            p2=p2->next;
        }
        else {
            temp->next=p3;
            p3=p3->next;
        }

        temp=temp->next;
      }
      if(p2){

            temp->next=p2;
      }
      else{
           temp->next=p3;
            
      }
      return merge->next;
    }

int main(){


    return 0;
}
    
   