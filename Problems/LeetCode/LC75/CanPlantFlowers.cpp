#include<bits/stdc++.h>


using namespace std;
bool canPlaceFlowers(vector<int>& flowerbed, int n) {
       if(n==0) return true;
       int m=flowerbed.size();
       if(m==1 && flowerbed[0]==0) return true;
       int k=0;
       for(int i=0;i<m;i++){
        if(flowerbed[i]==1) continue;
        else if((i==0 && flowerbed[i]==0) && flowerbed[i+1]==0) {
            k++;
            flowerbed[i]=1;

        }
         else if((i>0&&i<m-1 &&flowerbed[i]==0) && flowerbed[i-1]==0 && flowerbed[i+1]==0){
            k++;
            flowerbed[i]=1;
    
        }
         else if((i==m-1 && flowerbed[i]==0) &&flowerbed[i-1]==0){
            k++;
            flowerbed[i]=1;
            break;
        }
       } 

    
        return (k>=n)?true:false;
    }

int main(){
vector<int> flowerbed={0,1,0};
int n=1;
cout<<canPlaceFlowers(flowerbed,n);
    return 0;
}