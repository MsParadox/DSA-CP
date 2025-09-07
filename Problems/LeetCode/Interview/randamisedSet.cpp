#include<iostream>
#include<unordered_set>
#include<random>
using namespace std;
class RandomizedSet {
 unordered_set<int> *s;
public:
   RandomizedSet(){
    s= new unordered_set<int>();
   }
   bool insert( int val){
    if(s->find(val)==s->end()){
        s->insert(val);
        return true;
   }
   else return false;}
   
   bool remove( int val){
    if(s->find(val)!=s->end()){
        s->erase(val);
        return true;
   }
   else return false;
   }
   int getRandom(){
    auto itr=s->begin();
    advance(itr,rand()%s->size());
    return *itr;
   }

};
int main(){
    RandomizedSet rs =  RandomizedSet();
    cout<<rs.insert(3)<<endl;
    cout<<rs.insert(1)<<endl;
    cout<<rs.insert(5)<<endl;
    cout<<rs.insert(2)<<endl;
    cout<<rs.insert(4)<<endl;
    cout<<rs.getRandom()<<endl;
    cout<<rs.getRandom()<<endl;
    cout<<rs.getRandom()<<endl;
    cout<<rs.getRandom()<<endl;
    cout<<rs.getRandom()<<endl;
    cout<<rs.getRandom()<<endl;
    cout<<rs.getRandom()<<endl;
    cout<<rs.getRandom()<<endl;



    return 0;
}