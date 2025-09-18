#include<iostream>
#include<set>
using namespace std;
int main (){
    multiset<int ,greater<int> > ms;
    ms.insert(1);
    ms.insert(7);
    ms.insert(4);
    ms.insert(3);
    ms.insert(14);
    ms.insert(4);
    for(auto val : ms){
     cout<<val <<" ";
    }

    return 0;

}