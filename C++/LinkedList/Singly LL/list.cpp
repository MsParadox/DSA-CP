#include<iostream>
#include<list>

using namespace std;
int main (){
    list <int> l1 = {1,2,3,4,5};
  /*  list <int>:: iterator itr;
    itr =l1.begin();
    cout<<*itr<<endl;
    cout<<*(l1.begin)();*/
auto itr =l1.begin();
cout<<*itr<<endl;
 auto rev_itr =l1.rbegin();
 cout<<*rev_itr << endl;
 advance(itr,2);
 cout<<*itr<<endl;
 //using range based loop
 for(auto num:l1){
    cout<<num<<endl;
 }
 //using iterators
 for(auto itr = l1.begin();itr!= l1.end();itr++){
    cout<<*itr<<" ";
 } cout<<endl;
 // reverse traversal
 for( auto itr = l1.rbegin(); itr!= l1.rend(); itr++)
{
cout<<*itr<<" ";
}
//inserting elements
/*auto itr =l1.begin();
  advance(itr ,2);
  l1.insert(itr,3,5);
   for(auto itr = l1.begin();itr!= l1.end();itr++){
    cout<<*itr<<" ";
 } cout<<endl; */
      return 0;
} 