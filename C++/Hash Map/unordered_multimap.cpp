#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_multimap<string, int> fruitcount;
    fruitcount.insert(make_pair("apple",9));
    fruitcount.insert(make_pair("banana",7));
    fruitcount.insert(make_pair("grapes",5));
    fruitcount.insert(make_pair("orange",1));
    
    for(auto pair : fruitcount){
        cout<<"Fruit->"<<pair.first<<endl;
        cout<<"Count->"<<pair.second<<endl;
    }
        return 0;
}