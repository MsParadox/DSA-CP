#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int countDays(int days, vector<vector<int>>& meetings) {
        int n= meetings.size();
        unordered_set<int> s;
        for (int i = 0; i < n; i++)
        { for(int j=meetings[i][0];j<=meetings[i][1];j++){
            s.insert(j);}
        }
        
        int countdays =0;
        for (int i = 1; i <= days; i++)
        {
        if(s.find(i)!=s.end()) {
            s.erase(i);
            continue;}
        else countdays++;
        }
        
        return countdays;
    }
int main (){
vector<vector<int>> meetings ={{5,7},{1,3},{9,10}};
int days =10;
 cout<<countDays(days,meetings);
     return 0;
}