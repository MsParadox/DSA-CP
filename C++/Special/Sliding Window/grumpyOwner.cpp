#include<iostream>
#include<vector>
using namespace std;
int maxSatisfied(vector<int> &customers, vector<int> &grumpy,int minutes){
//here we have to find window with most loss of satisfaction
vector<int> &arr =customers;
int n = arr.size();
int k=minutes;
//calculate first window loss
int preloss =0;
for ( int i = 0; i < k; i++)
{ if(grumpy[i]==1) preloss+=arr[i];
}
int maxLoss =preloss;
int maxIdx =0;

//Sliding Window
int i =1;
int j =k;
while(j<n){

    int currLoss =preloss;
    if(grumpy[j]==1) currLoss+=arr[j];
    if(grumpy[i-1]==1) currLoss -=arr[i-1];
  if(maxLoss<currLoss){
    maxLoss =currLoss;
    maxIdx =i;
  }
  preloss =currLoss;
  i++;
  j++;
}
//changing mood
for(int i =maxIdx;i<maxIdx+k;i++){
     grumpy[i]=0;
}
//calculating total max satisfaction
int ans=0;
for(int i=0;i<n;i++){
    if(grumpy[i]==0) ans+=arr[i];
}
return ans;
}
int main(){
    vector<int>  customers ={1,0,1,2,1,1,7,5};
    vector<int>  grumpy  =  {0,1,0,1,0,1,0,1};
    int minutes =3;
    cout<<maxSatisfied(customers,grumpy,minutes);
    return 0;

}