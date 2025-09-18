//sort a nearly sorted array
#include<iostream>
#include<queue>
using namespace std;

//we use Min Heap here 
int main(){
    int arr[]={10,9,8,7,4,70,60,50};
    int n =sizeof(arr)/4;
    int k =4;
    
    priority_queue<int,vector<int>,greater<int>> pq;
    int idx=0;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) { 
            arr[idx++]=pq.top();
            pq.pop();}
    }
    while(pq.size()>0){
        arr[idx++]=pq.top();
        pq.pop();
    }
    
    for(auto e: arr){
        cout<<e<<" ";
    }
 return 0;   
}