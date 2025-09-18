//by using Max and Min heap both
//cond 1: all ele of left <= all ele of right
//cond 2: size of left and right should be same or the differance should be 1

#include<iostream>
#include<queue>

using namespace std;

class MedianFinder{
    public:
    priority_queue<int> left;//max heap
    priority_queue<int,vector<int>,greater<int>> right;//min heap
    MedianFinder(){

    }

    void addNum(int num){//O(logn)
        if(left.size()==0 ||num<left.top()) left.push(num);//logn
        else right.push(num);//logn

        if(left.size()>right.size()+1){
            right.push(left.top());//logn
            left.pop();//logn
        }
        if(right.size()>left.size()+1){
            left.push(right.top());
            right.pop(); }
    }

    double findMedian(){//O(1)
        if(left.size()==right.size()) return (left.top() + right.top())/2.0;
        else{
            if(left.size()>right.size()) return left.top();
            else return right.top();
        }
    } 
};

int main(){
MedianFinder m;
m.addNum(6);
cout<<m.findMedian()<<endl;
m.addNum(1);
cout<<m.findMedian()<<endl;
m.addNum(2);
cout<<m.findMedian()<<endl;
m.addNum(4);
cout<<m.findMedian()<<endl;


    return 0;
}