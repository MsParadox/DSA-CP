#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n;
        cin>>n;
    int arr[n];
    for (int i = 0; i <n-1; i++)
    {
        cin>>arr[i];
    }
    
    int mine=INT_MAX;
    
    
    for(int i=0;i<n-1;i++){
       int j=i+1;
       
        while(j<n){
            int maxl=INT_MIN;
            for(int x=i; x<=j;x++){
                
                maxl=max(maxl,arr[x]); 
                
            }
            mine=min(mine,maxl);
                
                
            j++;
            }
            
        }
       
    cout<<mine-1<<endl;    
    }

    
    return 0;
}