#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class RangeFreqQuery{
 public:
   vector<unordered_map<int,int>> st;
   int n;

   unordered_map<int,int> addMaps(unordered_map<int,int> &mp1,unordered_map<int,int> &mp2){
    unordered_map<int,int> mp;
    for(auto x:mp1){
      mp.insert(x);
    }

    for(auto x :mp2){
      int key =x.first, freq =x.second;
      if(mp.find(key)==mp.end())//key not found in mp
      mp.insert(x);
      else mp[key]+=freq;
    }

    return mp;
   }

   void buildTree(vector<int>&nums,int i, int lo ,int hi){
    if(lo==hi){//base case 
      st[i][nums[lo]]=1;
      return;
    }
    int mid= lo+(hi-lo)/2;
    buildTree(nums,2*i+1,lo,mid);//left subtree
    buildTree(nums,2*i+2,mid+1,hi);//right subtree
    st[i]= addMaps(st[2*i+1],st[2*i+2]);
    }

 
  RangeFreqQuery(vector<int>& nums){
    n=nums.size();
    st.resize(4*n);
    buildTree(nums,0,0,n-1);
   }

   
 int getFreq(int i,int lo,int hi,int&l,int&r,int &key){
    if(l>hi ||r<lo) return 0;
    if(lo>=l && hi<=r) {
      if(st[i].find(key)==st[i].end()) return 0;
      else return st[i][key];
    }
  
    int mid = lo+(hi-lo)/2;
    int leftAns = getFreq(2*i+1,lo,mid,l,r,key);
    int rightAns =getFreq(2*i+2,mid+1,hi,l,r,key);
    return leftAns+rightAns;
}

   int query(int left,int right,int value){
    return getFreq(0,0,n-1,left,right,value);
   }
};

int main(){
vector<int> arr ={2,4,2,4,6,4,2,6};
RangeFreqQuery f(arr);
cout<<f.query(1,5,4)<<endl;
cout<<f.query(0,3,2)<<endl;
cout<<f.query(5,7,6)<<endl;
cout<<f.query(2,6,2)<<endl;

    return 0;
}