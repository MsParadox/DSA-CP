#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>

using namespace std;

double getMedian(priority_queue<int> & left ,priority_queue<int,vector<int>,greater<int>> & right,int x,int y){
    int totalsize =x+y;
    if(totalsize% 2!=0){
        //odd
        return right.top();
    }
    else{
        //even
        return (left.top() + right.top())/2.0;
    }
}

bool isBalanced(int x, int y){
    return (x==y) or(x+1==y);
}

vector<double> MedianOfSlidingWindow(vector<int> &arr, int k){
int n =arr.size();
priority_queue<int> left;
priority_queue<int,vector<int>,greater<int>> right;
int x=0,y=0;
right.push(arr[0]);
y++;
for (int i = 1; i <k; i++)
{
    int curr=arr[i];
    double med =getMedian(left,right,x,y);
    if(curr<med){
        //go left
        left.push(curr);
        x++;
        if(!isBalanced(x,y)){
            int Toberemoved = left.top();
            left.pop();
            right.push(Toberemoved);
            x--; y++;
        }
        
    }
    else{
        //go right
        right.push(curr);
        y++;
        if(!isBalanced(x,y)){
            int Toberemoved = right.top();
            right.pop();
            left.push(Toberemoved);
            y--; x++;
        }

    }

}
double m=getMedian(left,right,x,y);//ans of first window

vector<double> result;
result.push_back(m);
unordered_map<int,int> mp;
for(int i = k;i<n;i++){
 int newElementIndex=i;
 int oldElementToBeDeleted =i-k;
 double med = getMedian(left,right,x,y);
 if(arr[newElementIndex]>med){
    //go right
    right.push(arr[newElementIndex]);
    y++;
     if(!isBalanced(x,y)){
            int Toberemoved = right.top();
            right.pop();
            left.push(Toberemoved);
            y--; x++;
        }
    
 }
 else{
    //go left
    left.push(arr[newElementIndex]);
    x++;
    if(!isBalanced(x,y)){
            int Toberemoved = left.top();
            left.pop();
            right.push(Toberemoved);
            x--; y++;
        }
        
 }
 mp[arr[oldElementToBeDeleted]]=oldElementToBeDeleted;

 while(!left.empty() and mp.count(left.top())){
 mp.erase(left.top());
 left.pop();
 x--;
  if(!isBalanced(x,y)){
            int Toberemoved = right.top();
            right.pop();
            left.push(Toberemoved);
            y--; x++;
 
 }
}

 while(!right.empty() and mp.count(right.top())){
 mp.erase(right.top());
 right.pop();
 y--;
  if(!isBalanced(x,y)){
            int Toberemoved = left.top();
            left.pop();
            right.push(Toberemoved);
            x--; y++;
 
 }
}

result.push_back(getMedian(left,right,x,y));
}
return result;
}


int main(){
vector<int> arr={1,3,-1,-3,5,3,6,7};
//ans :- 1,-1,-1,3,5,6
int k=3;
vector<double> r= MedianOfSlidingWindow(arr,k);
for(auto ele: r){
    cout<<ele<<" ";
}

    return 0;
}