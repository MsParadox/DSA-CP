#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector< list< pair<int ,int > > > graph;
int v;//no of vertices

void add_edge(int src ,int dest,int wt ,int bi_dir = true){
    graph[src].push_back({dest, wt});
    if(bi_dir) graph[dest].push_back({src, wt});
}

void display(){
    for(int i =0; i<graph.size();i++){
        cout<<i<<"->";
        for(auto ele : graph[i]){
            cout<<"("<<ele.first<<" "<<ele.second<<") ,";
        }
        cout<<endl;
    }
}

int main(){
//Undirected graph
//       2        6
//  (0)-----(2)------(3)
//  1 |    2 |       / 2
//  (1)-----(5)    (6)------(4)
//       3              4

//Directed graph
//  (0)----->(2)<-------(3)
//   |        ^        ^
//  \|/       |       /
//  (1)----->(5)    (6)------>(4)

cin>>v;
graph.resize(v, list<pair<int  ,int>> ());

int e;
cin>>e;
while(e--){

    //for unor: pass only one pair of same elements
    //for or : pass a pair acc to direction
    
    int s ,d,wt;
    cin>>s>>d>>wt;
    add_edge(s,d,wt);//for directed graph : pass False in func
}
display();

//input
// 7
// 7
// 0 2 2
// 0 1 1
// 1 5 3
// 2 5 2
// 2 3 6
// 3 6 2
// 6 4 4
//output
// 0->(2 2) ,(1 1) ,       
// 1->(0 1) ,(5 3) ,       
// 2->(0 2) ,(5 2) ,(3 6) ,
// 3->(2 6) ,(6 2) ,       
// 4->(6 4) ,
// 5->(1 3) ,(2 2) ,       
// 6->(3 2) ,(4 4) , 

    return 0;
}