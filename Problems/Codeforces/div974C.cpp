#include <bits/stdc++.h>

using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
		int n;
        cin>>n;
     
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
         if(n<=2){
            cout<<-1<<endl;
            continue;
        }
        sort(v.begin(),v.end());

        int mx=v[n-1];
        int idx=n/2 +1;
        int ele=v[idx-1];
        double sum=0.0;
        for (int i = 0; i < n; i++)
        {
            sum+=v[i];
        }
        cout<<sum;
        double avg=sum/n;
        cout<<avg;
        double x=n*((double(ele)-avg));
        if(x<0) cout<<0<<endl;
        else{
            int ans=(int)x +1;
            cout<<ans<<endl;
        }
        
// 6
// 1
// 2
// 2
// 2 19
// 3
// 1 3 20
// 4
// 1 2 3 4
// 5
// 1 2 3 4 5
// 6
// 1 2 1 1 1 25

      
        

      
       
    }

	return 0;
}