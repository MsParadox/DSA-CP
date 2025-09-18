#include<iostream>
#include<map>
using namespace std;
int main (){
    map<string , int> m;
    m.insert(make_pair("mohit",9713));
    m["ruchi"]= 7241;
    m["rohit"]=7828;
    for(auto element:m){
        cout<<element.first<<" "<<element.second<<endl;
        }
        cout<<endl;
     m["rohit"]=782828;
    /* for(auto element:m){
        cout<<element.first<<" "<<element.second<<endl;
         }*/
         map<string,int>:: iterator itr;
         for(itr = m.begin();itr!= m.end(); itr++){
            cout<<itr->first<<"->"<<itr->second<<endl;
         }
         cout<<endl;
         map<string,int>::reverse_iterator itr1;
           for(itr1 = m.rbegin();itr1!= m.rend(); itr1++){
            cout<<itr1->first<<"->"<<itr1->second<<endl;
         }
    return 0;
}