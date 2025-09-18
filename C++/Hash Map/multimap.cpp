#include<iostream>
#include<map>
using namespace std;
int main(){
multimap<string, int,greater<string>> directory;
directory.insert(make_pair("urvi",75859));
directory.insert(make_pair("survi",25859));
directory.insert(make_pair("churvi",46859));
directory.insert(make_pair("survi",367859));
//directory["urvi"]= 27949; not allowed       
for( auto pair : directory){
    cout<<"name->"<<pair.first<<endl;
    cout<<"Phone no ->"<<pair.second<<endl;
}
cout<<directory.count("survi")<<endl;




    return 0;
}