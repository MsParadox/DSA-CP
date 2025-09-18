#include<iostream>
#include<stack>
#include<cmath>
using namespace std;
int cal(int v1 , int v2 , char op){
if(op=='^'){
    return pow(v1,v2);
}if(op=='*'){
    return (v1*v2);
}if(op=='+'){
    return (v1+v2);
}if(op=='-'){
    return (v1-v2);
}if(op=='/'){
    return (v1/v2);
}
}
int precedence(char ch){
 if(ch=='^') return 3;
 else if(ch=='*' or ch=='/') return 2;
 else if(ch=='+' or ch=='-') return 1;   
 else return -1;
}   
int eval(string &str){
    stack<int> num;
    stack<char> op;
    for (int i = 0; i <str.size(); i++) {
    
    if (isdigit(str[i])){
        num.push(str[i]- '0');
    }else if (str[i]=='('){
        op.push('(');
    }else if(str[i]==')'){
        while(!op.empty() and op.top()!='('){
            char opr= op.top();
            op.pop();
        int v2 = num.top();
    num.pop();
    int v1 = num.top();
    num.pop();
    num.push(cal(v1,v2,opr));
    }
    if (!op.empty()) op.pop();
}
    
    else {
    while (!op.empty() and precedence(op.top())>=precedence(str[i]))
    { char opr= op.top();
            op.pop();
        int v2 = num.top();
    num.pop();
    int v1 = num.top();
    num.pop();
    num.push(cal(v1,v2,opr));
  
    }
op.push(str[i]);
}
}while (!op.empty()){
     char opr= op.top();
            op.pop();
        int v2 = num.top();
    num.pop();
    int v1 = num.top();
    num.pop();
    num.push(cal(v1,v2,opr));
}
return num.top();

}
int main (){
    string str = "1+(2*(3-1))+3";
    cout<<eval(str);
 return 0;
}