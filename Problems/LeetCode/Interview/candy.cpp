#include<iostream>
#include<vector>
using namespace std;
int candy(vector<int> &ratings){
    int n= ratings.size();
    vector<int> c(n,1);
    for (int i = 1; i < n; i++){
        if(ratings[i]>ratings[i-1])
        {
            c[i]=c[i-1]+1;
        }
    }
    for(int i=n-2;i>=0;--i){
       if(ratings[i]>ratings[i+1]) c[i]=max(c[i+1]+1,c[i]);
    }
    int totalcandies =0;

    for( auto ele :c){
   totalcandies += ele;
    }
    return totalcandies;
}
int main(){
    vector<int> ratings ={1,2,2};
    cout<<candy(ratings);
    return 0;
}