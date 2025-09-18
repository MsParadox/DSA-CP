#include<iostream>
#include<set>
using namespace std;
int main (){


    set<int> set1;
    set1.insert(2);
    set1.insert(3);
    set1.insert(1);
    set1.insert(4);

    cout<<set1.size()<<endl;
    set1.insert(3);
    cout<<set1.size()<<endl;
    set<int> :: iterator itr;
    for(itr= set1.begin(); itr!= set1.end();itr++){
     cout<<*itr<<" ";
    }
    cout<<endl;
    set1.erase(4);
    for( auto value :set1){
        cout<< value<<" ";
    }cout<<endl;
    cout<<set1.size()<<endl;
    cout<<set1.max_size()<<endl;
   cout<<set1.empty()<<endl;
   if(set1.find(3)!=set1.end()) cout<<"prsent"<<endl;
    set1.clear();
     cout<<set1.size()<<endl;

       return 0;
}