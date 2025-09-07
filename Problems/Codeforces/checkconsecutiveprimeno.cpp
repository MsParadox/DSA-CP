#include<iostream>
#include<vector>
using namespace std;
int main (){
    int n;
    cin>>n;

vector<int> v = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
int yes=1;
for(int i =0; i<n; i++){
    int num;
    cin>>num;
    if(num!=v[i]){
        yes=0;
        }
    else
        { yes=1;
        }
}

if(yes){
    cout<<"prime no. are continuous"<<endl;
}
else{
    cout<<"prime no. are NOT continuous"<<endl;
}

    return 0;

}
