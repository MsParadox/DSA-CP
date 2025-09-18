#include<iostream>
#include<vector>

using namespace std;

int findCentre(vector<vector<int>> &edges){
    int a = edges[0][0];
    int b = edges[0][1];

    int c = edges[1][0];
    int d = edges[1][1];
    return (c==a or c==b) ? c : d;
}

int main(){

vector<vector<int> > edges ={{1,2},{2,3},{4,2}};
cout<<findCentre(edges);


    return 0;
}