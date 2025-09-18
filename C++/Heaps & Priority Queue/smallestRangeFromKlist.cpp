#include<iostream>
#include<vector>
#include<queue>
//tc O(nklogk) nk->total no. of ele in all k list
using namespace std;
typedef pair<int ,pair<int,int>> pip;
vector<int> smallestRange(vector<vector<int>> &arr){
    priority_queue<pip,vector<pip>,greater<pip>> pq;
    //pq elemet :-> { arr[row][col] ,{row, col}}
    int mx =INT32_MIN;
    for(int i=0;i<arr.size();i++){// klogk
        mx =max(mx,arr[i][0]);
        pq.push({arr[i][0],{i,0}});
    }
    int mn = pq.top().first;
    int start =mn ,end =mx;

    while(true){// nklogk
        int row= pq.top().second.first;
        int col= pq.top().second.second;
        pq.pop();
        if(col==arr[row].size()-1) break;
        pq.push({arr[row][col+1],{row,col+1}});
        mx=max(mx,arr[row][col+1]);
        mn =pq.top().first;
        if(mx-mn<end-start){
            end=mx;
            start=mn;
        }
    }
    return {start,end};
}

int main(){
vector<vector<int>> arr = {{4,10,15,24,26},{0,9,12,20},{5,18,22,30}};
vector<int> r = smallestRange(arr);
cout<<"{"<<r[0]<<" "<<r[1]<<"}";


    return 0;
}