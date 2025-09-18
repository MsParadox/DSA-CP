#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int>  nge( vector<int> &arr){
    int n =arr.size();
    vector<int> output(n ,-1);
    for(int i=0 ; i <n; i++){
        for(int j =i+1 ; j <n ;j++){
            if(arr[j]> arr[i]){
                output[i]=arr[j];
                break;
            }
        }
    } return output;
}
vector<int>  ngestack( vector<int> &arr){
    int n =arr.size();
    vector<int> output(n ,-1);
    stack<int> st;
    st.push(0);
   for(int i= 1; i<n; i++){
    while(!st.empty() and arr[i]> arr[st.top()]){
        output[st.top()]= arr[i];
        st.pop();

    }st.push(i);
   }     //optional no need       
      while(!st.empty()){
        output[st.top()]=-1;
        st.pop();
      }  
     return output;
}vector<int>  nsestack( vector<int> &arr){
    int n =arr.size();
    vector<int> output(n ,-1);
    stack<int> st;
    st.push(0);
   for(int i= 1; i<n; i++){
    while(!st.empty() and arr[i]< arr[st.top()]){
        output[st.top()]= arr[i];
        st.pop();

    }st.push(i);
   }     //optional no need       
      while(!st.empty()){
        output[st.top()]=-1;
        st.pop();
      }  
     return output;
}
int main (){
    int n;
    cin>>n;
vector<int> v;
for(int i= 0 ; i< n; i++){
    int x;
     cin>>x;
     v.push_back(x);}
vector<int> res = nge(v);
    for(int i= 0 ; i< n; i++){
cout<<res[i]<<" ";
} cout<<endl;
vector<int> res1 = nsestack(v);
    for(int i= 0 ; i< n; i++){
cout<<res1[i]<<" ";
}
    return 0;
}