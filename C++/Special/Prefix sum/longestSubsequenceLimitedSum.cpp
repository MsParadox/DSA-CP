//t O(nlogn+n*m)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>  answerqueries(vector<int> &nums,vector<int> &queries){
    int n =nums.size();
    int m =queries.size();
    sort(nums.begin(),nums.end());
  
    vector<int> ans(m);

    //prifix Sum
    for (int i = 1; i<n; i++)
    {
        nums[i] +=nums[i-1];
    }

    for (int i = 0; i < m; i++)
    {int count=0;
        for (int j = 0; j < n; j++)
        {if(nums[j]>queries[i])  break;
            count++;
        }
        ans[i]=count;
    } 
    
return ans;
}
int main(){
    vector<int> nums ={4,5,2,1};
    vector<int> queries ={3,10,21};
    vector<int> r =answerqueries(nums,queries);
    for (int i = 0; i< r.size(); i++)
    {
        cout<<r[i]<<" ";
    }
    
    return 0;
}