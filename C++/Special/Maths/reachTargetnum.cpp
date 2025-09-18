#include<iostream>
using namespace std;


int reachNum(int target){
    if(target==0) return 0;
    target=abs(target);
    int count=0; 
    int sum =0;
    
while(sum<target){
     sum+=(++count);}
if(sum==target) return count;
while ((sum-target)%2==1)
{ count++;
    sum+=count;
}

return count;

}

int main(){

cout<<reachNum(3);
    return 0;
}