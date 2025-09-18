#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
int v;//no of vertices

void add_edge(int src ,int dest ,int bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}

void dfs(int node ,unordered_set<int> &visited){
    visited.insert(node);
    for( auto neighbor : graph[node]){
        if(! visited.count(neighbor)){
            dfs(neighbor,visited);
        }
    }
}
int Connected_component(){
    int result =0;
    unordered_set<int> visited;
    for (int i = 0; i <v; i++)
    {// go to every vertices
     // if from a vertex  we can initialise a dfs , we will get another conn_compo
     if(visited.count(i)==0){
        result++;
        dfs(i,visited);
     }   
    }
    return result;
}

int main(){
//Undirected graph
//  (0)-----(1)---  ---(2)
//   |       |       /    \
//  (3)-----(4)    (5)-----(6)


cin>>v;
graph.resize(v, list<int> ());

int e;
cin>>e;
while(e--){
    int s ,d;
    cin>>s>>d;
    add_edge(s,d);
}

cout<<Connected_component();
//input
// 7
// 8
// 0 1
// 0 3
// 1 3
// 3 4
// 1 4
// 2 5
// 5 6
// 2 6

//output
// 2
// if we add edge (1,2) then ans = 1;
    return 0;
}