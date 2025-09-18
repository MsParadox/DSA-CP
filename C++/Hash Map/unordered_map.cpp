#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
unordered_map<int , string> record;
record.insert(make_pair(3 ,"ria"));
record[1]= "mohit";
record[2]= "ruchi";
for( auto pair : record){
    cout<<"roll no.->" <<pair.first<<endl;
    cout<<"name->"<<pair.second<<endl;
}
    return 0;

}