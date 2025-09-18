#include<iostream>
#include<algorithm>
#include<vector>
//by sortig approch TC is greater than nlogn
using namespace std;
int lastStoneWeight(vector<int>& stone){
 while(stone.size()>1){
   sort(stone.begin(),stone.end());
   int x=stone[stone.size()-1];
   stone.pop_back();
   int y=stone[stone.size()-1];
   stone.pop_back();
   if(x!=y) stone.push_back(x-y);
 }

 if(stone.size()==1) return stone[0];
 else return 0;
}


int main(){
vector<int> stone={2,7,4,1,8,1};
cout<<lastStoneWeight(stone);



    return 0;
}