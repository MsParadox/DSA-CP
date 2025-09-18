#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class MedianFinder{
    public:
    vector<int> v;
    MedianFinder(){

    }
    //by built in sorting
    void addNum(int num){//O(log[ 1^1 * 2^2 * 3^3...*n^n]) very bad
        v.push_back(num);
        sort(v.begin(),v.end());
    }
    
    //by insrtion sort
    void addNum2(int num){//Tc better than above but bad
        v.push_back(num);
        int i=v.size()-1;
        while(i>=1 && v[i]<v[i-1]){
            swap(v[i],v[i-1]);
            i--;
        }
    }

    double findMedian(){//O(1)
        int n=v.size();
        if(n%2!=0) return v[n/2];
        else return (v[n/2]+v[n/2 -1])/2.0;
    } 
};

int main(){
MedianFinder m;
m.addNum2(6);
cout<<m.findMedian()<<endl;
m.addNum2(1);
cout<<m.findMedian()<<endl;
m.addNum2(2);
cout<<m.findMedian()<<endl;
m.addNum2(4);
cout<<m.findMedian()<<endl;


    return 0;
}