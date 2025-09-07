#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int hIndex(vector<int> &citations){
   int n = citations.size();
    sort(citations.begin(),citations.end());
    int h=0;
    for(int i =n-1 ;i>=0; i--){
    if(citations[i]>h) h++;
    else break;
    }
return h;
}
int main(){
    vector<int> citations ={5,5,5,5,4};
    cout<<hIndex(citations);
    return 0;
}