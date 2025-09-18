//m1: built in sort  t O(n logn) s O(logn)
//m2: selectio sort  t O(k*n) s O(1)
//m3: quick sort  t O(n) {not in worst case}
//m4: using Heap  t O(n logk) 
#include<iostream>
#include<queue>
using namespace std;

//we use Max Heap here t O(n*logk) & s O(k)
//in case of min heap t O(log(n!)) ~ O(n logn)
int main(){
    int arr[]={10,20,-4,5,18,24,1,-7,56};
    int n =sizeof(arr)/4;
    int k =4;
    
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();
 return 0;   
}