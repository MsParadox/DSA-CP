#include<iostream>
#include<vector>

using namespace std;

class NumArray{
 public:
   vector<int> st;
   int n;

void buildTree(vector<int> &arr,int i, int lo ,int hi){
    if(lo==hi){//base case 
      st[i]=arr[lo];
      return;
    }
    int mid= lo+(hi-lo)/2;
    buildTree(arr,2*i+1,lo,mid);//left subtree
    buildTree(arr,2*i+2,mid+1,hi);//right subtree
    st[i]= st[2*i+1]+st[2*i+2];
    }


NumArray(vector<int>& nums){
    n=nums.size();
    st.resize(4*n);
    buildTree(nums,0,0,n-1);
   }

void updateVal(int i,int lo ,int hi,int & index,int &val){
      if(lo==hi){//base case 
      st[i]=val;
      return;
    }
    int mid= lo+(hi-lo)/2;
    if(index<=mid) updateVal(2*i+1,lo,mid,index,val);
    else updateVal(2*i+2,mid+1,hi,index,val);
    st[i]= st[2*i+1]+st[2*i+2];
}

void update(int index,int val){
    updateVal(0,0,n-1,index,val);
}

int getSum(int i,int lo ,int hi,int &l,int&r){
    if(l>hi ||r<lo) return 0;
    if(lo>=l && hi<=r) return st[i];
    int mid = lo+(hi-lo)/2;
    int leftSum = getSum(2*i+1,lo,mid,l,r);
    int rightSum =getSum(2*i+2,mid+1,hi,l,r);
  return leftSum+rightSum;
}

int sumRange(int left,int right){
    return getSum(0,0,n-1,left,right);
}

};


int main(){
vector<int> arr ={1,4,2,8,6,4,9,3};
NumArray sm(arr);
cout<<sm.sumRange(2,5)<<endl;
sm.update(2,5);
cout<<sm.sumRange(2,5)<<endl;
cout<<sm.sumRange(6,7)<<endl;
sm.update(6,-3);
cout<<sm.sumRange(6,7)<<endl;




    return 0;
}