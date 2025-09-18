//Check if the visited is not your parent then there is a cycle

#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>
using namespace std;

vector<list<int>> graph;
int v;//no of vertices

void add_edge(int src ,int dest ,int bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}

bool bfs(int src){
    unordered_set<int>vis;
    queue<int>qu;
    vector<int>par(v,-1);
    qu.push(src);
    vis.insert(src);

    while(!qu.empty()){
       int curr =qu.front();
       qu.pop();
       for(auto neighbour : graph[curr]){
           if(vis.count(neighbour)and par[curr]!= neighbour){
            //cycle detected
            return true;
        }
        if(!vis.count(neighbour)){
            vis.insert(neighbour);
            par[neighbour]=curr;
            qu.push(neighbour);
        }}
}    return false;
}

bool has_cycle(){
    unordered_set<int>vis;
    for (int i = 0; i <v; i++)
    {
        if(!vis.count(i)){
            bool result =bfs(i);
            if(result==true) return true;
        }
    }
    return false;
}

int main(){

cin>>v;
graph.resize(v, list<int> ());

int e;
cin>>e;
while(e--){

    int s ,d;
    cin>>s>>d;
    add_edge(s,d,false);
}
bool b= has_cycle();
cout<<b<<endl;

// 4 
// 4
// 0 1
// 1 2
// 2 3
// 3 0

//op:
// 1
    return 0;
}