#include<iostream>
#include<queue>
#include<vector>
using namespace std;

//we use Max Heap  t O(n^2 *logK)
//by diagonal traversal t O(k^2 * logk)
int main(){
    vector<vector<int>> matrix ={{1,5,9},{10,11,13},{12,13,15}};
    //1  5  9
    //10 11 13
    //12 13 15
    int n =matrix.size();
    int k =5;
    
    priority_queue<int> pq;
    for(int i=0;i<n;i++ ){
        for(int j=0;j<n;j++){
        pq.push(matrix[i][j]);
        if(pq.size()>k) pq.pop();
    }
    }
    cout<<pq.top();
 return 0;   
}