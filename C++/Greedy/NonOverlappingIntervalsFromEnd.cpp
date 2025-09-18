#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(vector<int> &a ,vector<int> &b){
    return a[1] < b[1];
}

int eraseOverlappingIntervals(vector<vector<int>> &intervals){
 int ans=0;
 sort(intervals.begin(), intervals.end(),cmp);
int lastEndTime =intervals[0][1];
for (int i = 1; i < intervals.size(); i++)
{
    if(intervals[i][0] <lastEndTime){
        ans++;
    }
    else{
        lastEndTime =intervals[i][1];
    }
}
return ans;
}


int main(){

 vector<vector<int>> intervals={{1,2},{2,3},{3,4},{1,3}};
 
 cout<<eraseOverlappingIntervals(intervals);




    return 0;
}