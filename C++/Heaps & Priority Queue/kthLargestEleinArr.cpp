#include<iostream>
#include<queue>
using namespace std;

//we use Min Heap here 
int main(){
    int arr[]={10,20,-4,5,18,24,1,-7,56};
    int n =sizeof(arr)/4;
    int k =4;
    
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();

    //m2: sort(arr.begin(),arr.end());
    //print arr[n-k]
 return 0;   
}