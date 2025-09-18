#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int  histogram( vector<int> &arr){
    int n =arr.size();
    
    stack<int> st;
    int ans = INT16_MIN;
    st.push(0);
   for(int i= 1; i<n; i++){
    while(!st.empty() and arr[i]< arr[st.top()]){
      int el = arr[st.top()];
      st.pop();
      int nsi =i;
       int psi = (st.empty())? -1:st.top();
       ans = max(ans,el*(nsi-psi-1 ));

    }st.push(i);
   }     
      while(!st.empty()){
      int el = arr[st.top()];
      st.pop();
      int nsi =n;
       int psi = (st.empty())? -1:st.top();
       ans = max(ans,el*(nsi-psi-1 ));

      }  
     return ans;
}
int main (){
    int n;
    cin>>n;
vector <int> v;
for(int i= 0 ; i< n; i++){
    int x;
     cin>>x;
     v.push_back(x);}
cout<<histogram(v);





    return 0;
}