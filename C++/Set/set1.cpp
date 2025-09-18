#include<iostream>
#include<set>
using namespace std;
int main (){
set<string> invitlist;
int n ;
 cin >>n;

while(n--){
   string name ;
   cin>>name;
  invitlist.insert(name);
}
for(auto name : invitlist){
    cout<<name<<" ";
}
  return 0;

}