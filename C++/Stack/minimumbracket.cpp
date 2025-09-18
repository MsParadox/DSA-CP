#include<iostream>
#include<stack>
using namespace std;
int minimumbracket(string str){
stack<char> st;
int count =0;
for(int i =0; i<str.size();i++){
char ch = str[i];
if(ch=='[' or ch =='{' or ch=='(') {
    st.push(ch);

}else{
    if(ch ==')' and !st.empty() and st.top() =='('){
        st.pop();
    }
    else if(ch ==']' and !st.empty() and st.top() =='['){
        st.pop();
    }else if(ch =='}' and !st.empty() and st.top() =='{'){
        st.pop();
    }else{
        count++;
    }
    
}
}  return count;  
}
int main (){
string str = "[))[{()()}{}}]]";
cout<<minimumbracket(str)<<endl;

    return 0;
}