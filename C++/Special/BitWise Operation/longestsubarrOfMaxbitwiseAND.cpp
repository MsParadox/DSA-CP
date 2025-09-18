#include<iostream>
using namespace std;
//XOR method
int main(){
    int arr[]={12,3,1,6,1,6,6,18,18,4,3,8,13,13,13,13,8};
    int n=17;
    int res =0;
    int mx =INT32_MIN;
    int count=0;
    for (int  i = 0; i < n; i++)
    {
        if(arr[i]>mx) {
            mx=arr[i];
            count=1;
        }
        else if(arr[i]==mx){
         count++;
         
        }
        res=max(res,count);
    }
    cout<<res<<endl;
    cout<<mx;
    return 0;
}