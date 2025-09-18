#include<iostream>
#include<queue>
#include<vector>
#include<unordered_set>
#include<list>
using namespace std;

vector<list<int>> graph;
int v;//no of vertices

void add_edge(int src ,int dest ,bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}

void topoBfs(){
    //kahn algo
    vector<int> indegree(v,0);
    for (int i = 0; i <v; i++)
    {
        for(auto neighbour :graph[i]){
            indegree[neighbour]++;
        }
    }
    queue<int> qu;
    unordered_set<int> vis;
    for (int i = 0; i <v; i++)
    {
        if(indegree[i]==0){
            qu.push(i);
            vis.insert(i);
        }
    }
    
    while(!qu.empty()){
        int node = qu.front();
        cout<<node<<" ";
        qu.pop();
        for(auto neighbour: graph[node]){
            if(!vis.count(neighbour)){
                indegree[neighbour]--;
                if(indegree[neighbour]==0){
                    qu.push(neighbour);
                }
            }
        }
    }
    
}


int main(){
//Directed graph
//                  (1)        
//             </       \>
//  (0)-----> (2)--------->(3)
//           |  \   \    ^
//          <|   \>  \---------->   
//          (4)---->(5)------>(6)------>(7)
//            \--------------->
cin>>v;
graph.resize(v, list<int> ());

int e;
cin>>e;
while(e--){
    int s ,d;
    cin>>s>>d;
    add_edge(s,d,false);
}

topoBfs();

//input
// 8
// 11
// 0 2   
// 1 2
// 1 3
// 2 3
// 2 4
// 2 6 if we change 2,6 to 6,2 then no sorting output:0 1
// 2 5
// 3 5
// 4 6
// 5 6
// 6 7

//output
// 0 1 2 3 4 5 6 7 
    return 0;
}