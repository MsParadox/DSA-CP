#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(vector<int> &a ,vector<int> &b){
    return a[1] < b[1];
}

int minArrowsShots(vector<vector<int>> &points){
 int ans = 0;
 sort(points.begin(), points.end(),cmp);
int lastEndTime =points[0][1];
for (int i = 1; i < points.size(); i++)
{
    if(points[i][0] <=lastEndTime){
        ans++;
    }
    else{
        lastEndTime =points[i][1];
    }
}
return points.size()- ans;
}


int main(){

 vector<vector<int>> points={{1,2},{2,3},{3,4},{1,3}};
 
 cout<<minArrowsShots(points);




    return 0;
}