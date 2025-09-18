//#Ques:given an undirected weighted graph along with a src and dest . find the shortest path b/w src and dest in terms of sum of edge wts.

#include<bits/stdc++.h>

#define ll long long int 
#define pp pair<int,int>

using namespace std;

vector<list<pp>> gr;
void add_edge(int u, int v,int wt,bool bidir = true){
    gr[u].push_back({v,wt});
    if(bidir) gr[v].push_back({u,wt});
}

unordered_map<int,int> djikstra(int src,int n){//O(v logv +E logv)
    priority_queue<pp,vector<pp>,greater<pp>> pq;//{wt ,node}
    unordered_set<int>vis;
    vector<int> via(n+1);
    unordered_map<int,int> mp;
    for (int i = 0; i <n; i++)
    {
        mp[i]=INT32_MAX;
    }
    pq.push({0,src});
    mp[src]=0;
    while(!pq.empty()){//O((v+E)logv)
        pp curr = pq.top();
        if(vis.count(curr.second)){
            pq.pop();
            continue;
        }
        vis.insert(curr.second);
        pq.pop();
        
        for(auto neighbour : gr[curr.second]){
            if(!vis.count(neighbour.first)and mp[neighbour.first]>mp[curr.second]+ neighbour.second){
                pq.push({mp[curr.second]+  neighbour.second,neighbour.first});
                via[neighbour.first] =curr.second;
                mp[neighbour.first]=mp[curr.second]+  neighbour.second;
            }
        }
    }
    return mp;
}

int main(){
    int n,m;
    cin>>n>>m;
    gr.resize(n,list<pp>());
    while(m--){
        int u,v,wt;
        cin>>u>>v>>wt;
        add_edge(u,v,wt);
    }
    int src;
    cin>>src;
    unordered_map<int,int> shortest_path=djikstra(src,n);
    for(auto p:shortest_path){
        cout<<p.first<<p.second<<endl;
    }
    int dest;
    cin>>dest;
    cout<<shortest_path[dest];
// 7
// 9
// 0 1 1
// 0 2 5
// 1 2 4
// 1 3 1
// 2 3 3
// 3 4 1
// 4 5 2
// 5 6 6
// 3 6 3

// 0

//op:
// 6 5
// 5 5
// 4 3
// 0 0
// 1 1
// 2 5
// 3 2

//ip
// 6
//op
// 5

    return 0;
}