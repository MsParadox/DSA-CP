#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
//t O(n *root(n))
bool isPrime(int n){
if(n==1) return false;
for (int i = 2; i <=sqrt(n); i++)
{if(n%i==0) return false;

}
return true;
}

int digonalPrime(vector<vector<int>> &nums){
int mx=0;
int n=nums.size();
for ( int i = 0; i <n; i++)
    {
        if(isPrime(nums[i][i])){
            mx =max(mx,nums[i][i]);
        }
         if(isPrime(nums[i][n-i-1])){
            mx =max(mx,nums[i][n-i-1]);
        }
        
}
return mx;
}
int main(){
    vector<vector<int>> nums ={{1,2,3},{4,5,6},{7,8,9}};
    cout<<digonalPrime(nums);
    return 0;
}