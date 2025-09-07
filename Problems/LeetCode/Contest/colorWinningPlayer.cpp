#include<iostream>
#include<vector>
#include<map>
//#include <utility> 
#include<algorithm>
using namespace std;
// struct pair_hash {
//     template <class T1, class T2>
//     size_t operator()(const pair<T1, T2>& p) const {
//         auto h1 = hash<T1>{}(p.first);
//         auto h2 = hash<T2>{}(p.second);
//         // Combine the two hash values
//         return h1 ^ (h2 << 1); // or use boost::hash_combine
//     }
// };

    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        sort(pick.begin(),pick.end());
        map<pair<int,int>,int> m;
        for(int i=0;i<pick.size();i++){
            m[{pick[i][0],pick[i][1]}]++;
        }
        int ans=0;
        int  p=-1;
        for(auto e:m){
            if(e.second>e.first.first) 
            {
                if(e.first.first!=p){
                    p=e.first.first;
                    ans++;}
        }}
   return ans;

    }

int main(){

vector<vector<int>> pick={{0,2},{0,7}};
int n=2;
cout<<winningPlayerCount(n,pick);
    return 0;
}