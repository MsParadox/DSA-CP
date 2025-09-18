//TC O(V + E) and SC O(V + call stack)(worst case)

#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;
int v;

void add_edge(int src ,int dest ,int bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}

void dfs(int curr , int end , vector<int> &path){
    if(curr==end) {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr);//mark visited
    path.push_back(curr);
    for(auto neighbour : graph[curr]){
        if(! visited.count(neighbour)){
            dfs(neighbour,end,path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}

void allPath(int src ,int dest){
     vector<int> v;
     dfs(src ,dest , v);
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

allPath(0,6);
for(auto path : result){
    for(auto ele: path){
        cout<<ele<<" ";
    }
    cout<<endl;
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
// 0 1 5 6 
// 0 1 5 2 6 
// 0 4 3 1 5 6 
// 0 4 3 1 5 2 6

    return 0;
}