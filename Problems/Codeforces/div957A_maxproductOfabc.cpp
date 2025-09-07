#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
		int a,b,c;
        cin>>a>>b>>c;
        int k=5;
        while(k!=0){
            if(a<=b&&a<=c){
                a++;
                k--;
            }
            
            else if(b<=a&&b<=c){
                b++;
                k--;
            }

            else if(c<=b&&c<=a){
                c++;
                k--;
            }
        }
        cout<<a*b*c<<endl;

    }


    return 0;
}