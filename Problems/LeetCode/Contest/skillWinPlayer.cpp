#include<iostream>
#include<vector>
using namespace std;
     int findWinningPlayer(vector<int>& skills, int k) {
        int n =skills.size();
        vector<int> queue (n);
        for(int i=0;i<n;i++){
            queue[i]=i;
        }
        int idx =-1;
         for (int i = 0; i <n; i++)
         {if(skills[i]>skills[i+1])
         { idx=queue[i];
            int temp =skills[i+1];
            int t =queue[i+1];
            skills[i+1]=skills[i];
            queue[i+1]=queue[i];
            skills[i]=temp;
            queue[i]=t;

         }
         else idx =queue[i+1];

}
         
    }
int main(){
    vector<int> skills ={4,2,6,3,9};
    int k=2;
    cout<<findWinningPlayer(skills,k);
    return 0;
}