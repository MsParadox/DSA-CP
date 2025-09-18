//By using Kahn's algorithm we can find cycle in directed graph


//Time O(E* log*V)
#include<iostream>
#include<vector>

using namespace std;

int find(vector<int> &parent,int x){//O(lon*N)
    //this method returns which group x belongs to
    return parent[x] = (parent[x]==x)? x:find(parent,parent[x]);
}

bool Union(vector<int> &parent ,vector<int> &rank ,int a,int b){//O(log*N)
    a = find(parent,a);
    b = find(parent,b);
    if(a==b) return true;

    if(rank[a]>=rank[b]){
        rank[a]++;
        parent[b]=a;
    }
    else{
        rank[b]++;
        parent[a]=b;
    }
    return false;
}

int main(){
    
int n,m;
cin>>n>>m;
//n: ele and m: queries

vector<int>parent(n+1);
vector<int>rank(n+1,0);
for (int i = 0; i<=n; i++)
{
    parent[i]=i;
}

while(m--){
        int x,y;
        cin>>x>>y;
        bool b=Union(parent,rank,x,y);
        if(b==true) cout<<"Cycle Detected"<<endl;
}

// 10 10 
// 0 1
// 0 2
// 0 3
// 3 4
// 5 6
// 4 5
// 3 6(cycle form)

//o/p:
// Cycle Detected
    return 0;
}