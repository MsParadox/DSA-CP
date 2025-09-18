#include<iostream>
#include<stack>
using namespace std;
stack<int> copystack(stack<int> &input){
    stack<int> temp;
    while(!input.empty()){
        int curr = input.top();
        input.pop();
        temp.push(curr);
    } stack<int> result;
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        result.push(curr);
    }
    return result;
}
void f(stack<int> &st , stack<int> &result){
if(st.empty()) return;
int curr = st.top();
st.pop();
f(st,result);
result.push(curr);
}

int main (){
stack <int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
//stack<int> res = copystack(st);
stack <int> result;
f(st,result);
while(! result.empty()){
    int curr = result.top();
    result.pop();
    cout<<curr<<endl;
}
    return 0;
}