#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxSatisfaction(vector<int> &satisfaction){
    int n =satisfaction.size();
    sort(satisfaction.begin(),satisfaction.end());
    //suffix Sum
    int arr[n];
    arr[n-1]=satisfaction[n-1];
    for (int i = n-2; i >=0; i--)
    {
        arr[i]=arr[i+1]+satisfaction[i];
    }
    //find the pivot idx
    int idx =-1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>=0) {
           idx =i;
            break;}
    }
    if(idx==-1) return 0;
    //max sum of like time coefficient
    int t =1;
    int sum =0;
    for(int i=idx;i<n;i++){
        sum+=(satisfaction[i]*t);
        t++;
    }

    return sum;
}
int main(){
    vector<int> satisfaction ={-1,-8,0,5,-9};
   cout<<maxSatisfaction(satisfaction);
    return 0;
}