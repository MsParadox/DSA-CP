#include<iostream>
#include<stack>
using namespace std;
void removeAtBottom(stack<int> &st){
   //o(N) time and space
    stack<int> temp;
    while(st.size()!=1){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    } 
    st.pop();
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
    
}
void f(stack<int> &st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }int curr = st.top();
    st.pop();
    f(st,x);
    st.push(curr);
}
void f(stack <int> &st){
    if (st.size()==1){
    st.pop();
    return;
    }
    int curr = st.top();
    st.pop();
    f(st);
    st.push(curr);
}
int main(){
stack <int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
//removeAtBottom(st);
//for remove from any index take :  count< n-idx-1
f(st);
while(!st.empty()){
    int curr = st.top();
    st.pop();
    cout<<curr<<endl;
}
return 0;
}

