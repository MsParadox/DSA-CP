#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
		int n,m;
        cin>>n>>m;
        int a[n][m];
        int b[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                b[i][j]=a[i][j];
            }
        }
        if(n==1){
            for(int i=1;i<m;i++){
                swap(b[0][i-1],b[0][i]);
            }
        }
        else if(m==1){
            for(int i=1;i<n;i++){
                swap(b[i-1][0],b[i][0]);
            }
        }
        else{
            for(int j=0;j<m;j++){
                for(int i=1;i<n;i++){
                swap(b[i-1][j],b[i][j]);
                }
            }

            for(int i=0;i<n;i++){
                for(int j=1;j<m;j++){
                swap(b[i][j-1],b[i][j]);
                }
            }
        }
        
        bool flag=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(b[i][j]==a[i][j]) {
                    flag =false;
                    break;
                }
            }
        

      }
       
    if(flag){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
       }
       }
       else cout<<-1<<endl;
    }
    return 0;
// 5

// 1 1
// 1
// -1

// 2 1
// 2
// 1 
// 1 
// 2 

// 1 5
// 2 4 5 3 1 
// 4 5 3 1 2 

// 2 4
// 1 2 3 4
// 5 6 7 8 
// 6 7 8 5 
// 2 3 4 1

// 3 3 
// 4 2 1
// 9 8 3
// 6 7 5
// 8 3 9
// 7 5 6
// 2 1 4


}