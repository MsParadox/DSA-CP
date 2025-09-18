#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverse(queue <int> &qu){
stack <int> st;
while(!qu.empty()){
    int curr = qu.front();
    qu.pop();
    st.push(curr);  
}
while(!st.empty()){
    int temp = st.top();
    st.pop();
    qu.push(temp);
} 
}

int main (){
queue <int> qu;
qu.push(1);
qu.push(2);
qu.push(3);
qu.push(4);
queue<int>qu1 =qu;
queue<int> qu2 =qu;
while( !qu1.empty()){
    cout<<qu1.front()<<" ";
    qu1.pop();
}
cout<<endl;
 reverse(qu2);

while( !qu2.empty()){
    cout<<qu2.front()<<" ";
    qu2.pop();
}



    return 0;

}