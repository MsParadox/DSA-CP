#include<iostream>
#include<vector>
using namespace std;
  int partion ( int a[] ,  int first , int last){
      int pivot = a[last];
      int i = first;

      for (int j = first; j < last; j++){
        if(a[j]<pivot){
            swap( a[i], a[j]);
            i++;
        }
      }
          swap(a[i],a[last]);
          return i;
  }
int problemsort( int a[] , int first , int last , int k){
    
  int mo= partion(a, first, last);
    
        if( mo-first ==k-1)
            {return a[mo];}
            else if ( mo -first > k-1)
          {return problemsort(a ,first , mo-1 ,k);}
            else
         {return problemsort(a, mo + 1,last, k-mo +first-1);}
            
}
int main(){
    int n ,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n;i++)
        cin >> a[i];
  cout<<  problemsort(a ,0 , n-1 ,k);
    
        

    return 0;
}