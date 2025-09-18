#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//O(nlogn)
int numRescueBoats(vector<int> &people ,int limit){
    sort(people.begin(),people.end());//O(n logn)
    int i=0, j=people.size()-1;
    int bt=0;
    while(i<=j){//O(n)
        if(people[i]+people[j]<= limit){
            bt++;//allocate a boat to the pair
            i++;
            j--;
        }
        else {//allocate a boat to the heaviest
            bt++;
            j--;
        }
    }
    return bt;
}

int main(){

vector<int> people={3,5,3,4};
int limit =5;
cout<<numRescueBoats(people,limit);


    return 0;
}