#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool canAttendAllnMeetings(vector<vector<int>> & intervals){
    if(intervals.size()==0) return true;
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
    
    return ans==1;
}


int main(){

vector<vector<int> > intervals ={{7,10},{2,4}};
cout<<canAttendAllnMeetings(intervals);


    return 0;
}