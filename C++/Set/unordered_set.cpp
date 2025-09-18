#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> mohit;
    mohit.insert(67);
    mohit.insert(9);
    mohit.insert(1);
    mohit.insert(0);
   for(auto val: mohit){
    cout<<val<<" ";
   }
    return 0;

}