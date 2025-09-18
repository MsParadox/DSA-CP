//TC O(V + E) and SC O(V + call stack)(worst case)

#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
int v;

void add_edge(int src ,int dest ,int bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}

bool dfs(int curr ,int end){
    if(curr==end) return true;
    visited.insert(curr);//mark visited
    for(auto neighbour : graph[curr]){
        if(! visited.count(neighbour)){
            bool result =dfs(neighbour,end);
            if(result) return true;
        }
    }
    return false;
}

bool anyPath(int src ,int dest){
    return dfs(src ,dest);
}

int main(){
//  (0)-----(1)--------(5)
//   |       |       /    \
//  (4)-----(3)    (6)------(2)

cin>>v;
graph.resize(v, list<int> ());

int e;
cin>>e;
visited.clear();
while(e--){
    
    int s ,d;
    cin>>s>>d;
    add_edge(s,d);
}

cout<<anyPath(0,6);

//input
// 7
// 8
// 0 1
// 0 4
// 1 3
// 4 3
// 1 5 if we remove this edge then ans =0.
// 5 6
// 6 2
// 5 2



    return 0;
}