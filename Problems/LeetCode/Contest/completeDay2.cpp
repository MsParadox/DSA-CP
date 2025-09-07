#include<iostream>
#include<vector>
using namespace std;
long long count =0;
long long countCompleteDayPairs(vector<int>& hours) {
        int n=hours.size();
        int i=0;
        
        while(i<n-1){
        int j=i+1;
        for(int k=j;k<n;k++){
        if((hours[i]+hours[k])%24==0) count++;  }
        i++;
    }
    return count;
}





int main(){
vector<int> hours ={72,48,24,3};
cout<<countCompleteDayPairs(hours);


    return 0;
}