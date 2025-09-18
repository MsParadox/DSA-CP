#include<iostream>
#include<vector>
using namespace std;
class Queue{
vector <int> v;
int ts;
int front;
int back;
int cs;
public:
Queue(int n){
    v.resize(n);
    this-> front =0;
    this-> ts = n;
    this-> back = n-1;
    this-> cs = 0;}
void enqueue(int data){
   if(isFull()) return;
   this-> back = (this->back+1)%this->ts;
    this->v[this->back]= data;
    this->cs++;
}
void dequeue(){
    if(isEmpty()) return;
    this->front =(this ->front+1)%this->ts;
   this->cs--; }

int getFront(){
    if(this->front== -1) return -1;
    return v[this->front];
}
bool isEmpty(){
    return this-> cs== 0;

}
bool isFull(){
return this->cs == this->ts;
}
};
int main(){
    Queue qu(4);
  qu.enqueue(10);
  qu.enqueue(20);
  qu.enqueue(30);
  qu.enqueue(40);
  qu.dequeue();
  qu.dequeue();
  qu.enqueue(100);
  qu.enqueue(200);
    
    while(!qu.isEmpty()){
        cout<<qu.getFront()<<" ";
        qu.dequeue();

    }
    }