#include<iostream>
#include<unordered_set>
using namespace std;
int main (){
    unordered_multiset <int> ums;
    ums.insert(6);
    ums.insert(720);
    ums.insert(5);
    ums.insert(13);
    ums.insert(73);
    ums.insert(5);
  for( auto val :ums){
    cout<<val <<" ";
  }
    return 0;

}