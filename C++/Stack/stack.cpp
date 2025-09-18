#include<iostream>
#include<stack>
using namespace std;
int main (){
stack<int> st;
 st.push(1);
 st.push(2);
 cout<<st.empty()<<endl;
 st.push(3);
 cout<<st.top()<<"\n";
 st.push(4);
 st.push(5);
 cout<<st.top()<<"\n";
 st.push(6);


    return 0;

}