// 1) by nested loop O(n^2)
// 2) by using prifix sum time and space -> O(n) 
//sum[l  r] =0  = sum[ 0  r] - sum [ 0  l-1]
//prifix sum of r = prifix sum of l-1
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int maxlengthzerosubarray( vector<int> &v){
    unordered_map<int,int> m;
    int prefixsum =0;
    int maxlength = 0;
    for(int i =0;i<v.size();i++){
         prefixsum+= v[i];
         if(prefixsum==0){
            maxlength++;
         }
         if(m.find(prefixsum)!= m.end()){
            maxlength =max(maxlength,i-m[prefixsum]);
         }
         else{
            m[prefixsum]= i;
         }
    }
    return maxlength;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i =0 ; i<n ;i++){
        cin>>v[i] ; 
          }
    cout<<maxlengthzerosubarray(v)<<endl;      
    return 0;
}