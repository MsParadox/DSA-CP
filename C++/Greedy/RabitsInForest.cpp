#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;
int numRabbits(vector<int> &answers){
    // TC: O(n)
    // SC: O(n)
    unordered_map<int, int> mp;
    int result =0;
    for(int i=0; i<answers.size();i++){
        if(!mp[answers[i]+1]){
        result+= answers[i]+1;//new color group
        if(answers[i]==0) continue;
        mp[answers[i]+1]=1;
        }
        else{
            mp[answers[i]+1]++;
            int key =answers[i]+1;
            int val = mp[key];
            if(key==val){
                //found all rabbits of group
                //eliminate the group
                mp.erase(key);
            }
        }
    }    
    return result;
}


int main(){
vector<int> answers ={1,1,2};
cout<<numRabbits(answers);



    return 0;
}