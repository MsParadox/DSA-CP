#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<int>> graph;
int v;//no of vertices

void add_edge(int src ,int dest ,int bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}

void display(){
    for(int i =0; i<graph.size();i++){
        cout<<i<<"->";
        for(auto ele : graph[i]){
            cout<<ele<<" ,";
        }
        cout<<endl;
    }
}

int main(){
//Undirected graph
//  (0)-----(2)------(3)
//   |       |       /
//  (1)-----(5)    (6)------(4)

//Directed graph
//  (0)----->(2)<-------(3)
//   |        ^        ^
//  \|/       |       /
//  (1)----->(5)    (6)------>(4)

cin>>v;
graph.resize(v, list<int> ());

int e;
cin>>e;
while(e--){

    //for unor: pass only one pair of same elements
    //for or : pass a pair acc to direction
    
    int s ,d;
    cin>>s>>d;
    add_edge(s,d);//for directed graph : pass False in func
}
display();


    return 0;
}
// 7
// 7
// 0 2
// 0 1
// 2 5
// 2 3
// 1 5
// 3 6
// 6 4

// 0->2 ,1 ,   
// 1->0 ,5 ,   
// 2->0 ,5 ,3 ,
// 3->2 ,6 ,   
// 4->6 ,      
// 5->2 ,1 ,   
// 6->3 ,4 ,   