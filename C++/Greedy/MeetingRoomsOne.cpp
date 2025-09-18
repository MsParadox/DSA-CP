#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int minMeetingRooms(vector<vector<int>> & intervals){
    vector<int> start,ending;
    for(auto ele: intervals){
        start.push_back(ele[0]);
        ending.push_back(ele[1]);
    }
    sort(start.begin(),start.end());
    sort(ending.begin(),ending.end());

    int ans =0;
    int rooms =0;
    int i=0 ,j=0;
    while (i<start.size() && j<ending.size()){
     if(start[i]<ending[j]){
        //a meeting is starting
        rooms++;
        ans =max(ans, rooms);
        i++;
     }
     else if(start[i] >ending[i]){
        //a meeting is ending
        rooms--;
        j++;
     }
     else{
        i++;
        j++;
     }
    }
    
    return ans;
}


int main(){

vector<vector<int> > intervals ={{1,10},{2,7},{3,19},{8,12},{10,20},{11,30}};
cout<<minMeetingRooms(intervals);

