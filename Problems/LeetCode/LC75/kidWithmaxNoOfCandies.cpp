#include<iostream>
#include<vector>
using namespace std;
  vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int greatest=candies[0];
        for (int i = 1; i <n; i++)
        { 
            greatest=max(greatest,candies[i]);
        }
        vector<bool> ans(n,false);
         for (int i = 0; i <n; i++)
        { 
            if(candies[i]+extraCandies>=greatest) ans[i] =true;
        }
        return ans;
    }

int main(){
   

    return 0;
}