#include<iostream>
#include<stack>
using namespace std;
 string clearDigits(string s) {
    stack<char> st;
for(int i =0; i<s.length();i++){
char ch = s[i];
if(ch >= 97 && ch <=122) {
    st.push(ch);

}else{
    if(!st.empty()){
        st.pop();
    }
    
        } 
}

if(st.empty()) return "";
string p ="";
while(st.size()!=0){
    p =st.top()+p;
    st.pop();
}

return p;
}  
int main(){
    string s ="cb34";
    cout<<clearDigits(s);
    return 0;
}