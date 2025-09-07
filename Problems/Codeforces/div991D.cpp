#include <bits/stdc++.h>
using namespace std;


int t;
int main(){
    
	cin>>t;
	while(t--){
		string s;
        cin>>s;
        int n=s.length();
        for(int i=1;i<n;i++){
          if(s[i]!='0' &&s[i]>s[i-1]+1){

             int j=i;
            while(j>0 && s[j]>s[j-1]+1){
                s[j]--;
               swap(s[j],s[j-1]);
               j--;
            }
          }
        }
        cout<<s<<endl;
	}

	return 0;
}

// 6

// 19
// 1709
// 11555
// 51476
// 9876543210
// 5891917899


// 81
// 6710
// 33311
// 55431
// 9876543210
// 7875567711
