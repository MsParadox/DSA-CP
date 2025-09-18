//TC O(V + E) and SC O(V)(worst case)

#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;

int v;

void add_edge(int src ,int dest ,int bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}

void bfs(int src , int dest , vector<int> &dist){
queue<int> qu;
visited.clear();
dist.resize(v,INT32_MAX);
dist[src] =0;
visited.insert(src);
qu.push(src);
while(!qu.empty()){
    int curr = qu.front();
    cout<<curr<<" ";
    qu.pop();
    for(auto neighbour : graph[curr]){
        if(! visited.count(neighbour)){
            qu.push(neighbour);
            visited.insert(neighbour);
            dist[neighbour] =dist[curr] +1;
        }
    }
}
cout<<endl;
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

vector<int>dist;
bfs(0,6,dist);

for(int i= 0;i<dist.size();i++){
    cout<<dist[i]<<" ";
}

//input
// 7
// 8
// 0 1
// 0 4
// 1 3
// 4 3
// 1 5 
// 5 6
// 6 2
// 5 2

//output
//level Order traversal :-
//0 1 4 3 5 6 2 
//distance of 0 from other nodes :-
//0 1 3 2 1 2 3 


    return 0;
}