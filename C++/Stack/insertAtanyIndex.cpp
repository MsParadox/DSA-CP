#include<iostream>
#include<stack>
using namespace std;
void insertAtanyIndex(stack<int> &st,int x,int idx){
   //o(N) time and space
    stack<int> temp;
    int n = st.size();
    int count =0;
    while(count <n-idx){
    count++;
        int curr = st.top();
        st.pop();
        temp.push(curr);
    } 
    st.push(x);
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
int main(){
stack <int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
insertAtanyIndex(st,100,1);
while(! st.empty()){
    int curr = st.top();
    st.pop();
    cout<<curr<<endl;
}
return 0;
}

