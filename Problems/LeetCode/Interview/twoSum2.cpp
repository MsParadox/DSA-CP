//1 indexed array
#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int> &numbers , int target){
    int i=1;
    int j=numbers.size()-1;
    while(i<j){
            if(numbers[i]+numbers[j]==target) {
                return {i,j};}
            else if (numbers[i]+numbers[j]<target) i++;
            else if(numbers[i]+numbers[j]>target) j--;   
        }
        return {-1,-1};
    }

int main (){
vector<int> numbers ={0,2,7,11,15};//0 as first element is just to make it 1 index array 
int target =9;
vector<int> v = twoSum(numbers,target);
cout<<v[0]<<" "<<v[1];
    return 0;
}