#include<iostream>
#include<queue>
using namespace std;

int main(){

priority_queue<int> pq;//by default Max heap in c++ and Min heap in java
pq.push(1);
pq.push(2);
pq.push(3);
cout<<pq.size()<<endl;
cout<<pq.top()<<endl;
pq.pop();
cout<<pq.top()<<endl;
cout<<pq.size();

//Min Heap
priority_queue<int,vector<int>,greater<int>> pq1;



    return 0;
}