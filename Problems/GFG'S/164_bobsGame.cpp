#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> removeOrder(int n, vector<int> &arr, string str) {
        sort(arr.begin(),arr.end());
        vector<int> ans(n,0);
        int i=0;
        int j=n-1;
        for(int k=0;k<n;k++){
            if(str[k]=='0'){
                ans[k]=arr[i];
                i++;
            }
            else{
                ans[k]=arr[j];
                j--;
            }
        }
        return ans;
    }
};
int main(){
    return 0;
}