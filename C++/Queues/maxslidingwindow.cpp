#include<iostream>
#include<deque>
#include<vector>
using namespace std;
vector <int> maxslidingwindow(vector<int> &arr , int k){
  deque<int> dq;
  vector<int> res;
    for (int i = 0; i < k; i++)
    { while(!dq.empty() and arr[dq.back()] < arr[i]){
        dq.pop_back();
          }       
     dq.push_back(i);
    }
    res.push_back(arr[dq.front()]);
    for (int i = k; i < arr.size(); i++)
{
    
    if(dq.front()==(i-k))  dq.pop_front();
    while(!dq.empty() and arr[dq.back()] < arr[i]){
        dq.pop_back();
        }
        dq.push_back(i);
        res.push_back(arr[dq.front()]);
}
 return res;
    
}
int main () {
vector<int> arr ={1,3,-1,-3,5,3,6,7};
vector<int> result= maxslidingwindow(arr,3);
for (int i = 0; i < result.size(); i++)
{
    cout<<result[i]<<" ";

}


    return 0;
}