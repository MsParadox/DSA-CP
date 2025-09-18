#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
string preTopost(string &prestr){
    stack <string> st;
reverse(prestr.begin(), prestr.end());
for (int i = 0; i < prestr.size(); i++)
{
    if(isdigit(prestr[i])){
        st.push(to_string(prestr[i] - '0'));
    }
    else 
    { string v1 = st.top();
     st.pop();
  string v2 = st.top();
  st.pop();
  string newexp = v1+ v2 + prestr[i];
  st.push(newexp);   }
    
}
return st.top();
}
int main (){
string s = "*+32-15";
cout<<preTopost(s);



return 0;

}