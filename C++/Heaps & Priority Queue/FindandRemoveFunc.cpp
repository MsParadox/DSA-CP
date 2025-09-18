#include<iostream>
using namespace std;

class MinHeap{
    public:
    int arr[50];//we cannot initialise variable directly in class except array(not vector) size 
    int idx;
    
    MinHeap(){
        idx=1;
    }

    int top(){
        return arr[1];
    }

    void push (int x){
        arr[idx]=x;
        int i =idx;
        idx++;

        //Swap of i with parent till i==1
        while (i!=1){
            int parent =i/2;
            if(arr[i]<arr[parent]) swap(arr[i],arr[parent]);
            else break;
            i=parent;
        }
    }
    
    void pop(){
        idx--;
        arr[1]=arr[idx];
        int i=1;
        while (true)
        { int left =2*i, right =2*i+1;
           if(left>idx-1) break;
           if(right>idx-1){
            if(arr[i]>arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }
            break;
           }
            if(arr[left]<arr[right]){
                if(arr[i]>arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }
            else break;
            }
            else{
                if(arr[i]>arr[right]){
                swap(arr[i],arr[right]);
                i=right;
            }
            else break;
            }
        }
        
    }

    bool find(int x){
        bool flag =false;
        for(int i=1;i<=idx;i++){
            if(arr[i]==x){
                flag =true;
                break;
            }
        }
        return flag;
    }
       
    void remove(int x){
        idx--;
        int index=-1;
        //searching
          for(int i=1;i<=idx;i++){
            if(arr[i]==x){
                index = i;
                break;
            }
        }

        //rearrangement
        arr[index]=arr[idx];
        int i=index;
        while (true)
        { int left =2*i, right =2*i+1;
           if(left>idx-1) break;
           if(right>idx-1){
            if(arr[i]>arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }
            break;
           }
            if(arr[left]<arr[right]){
                if(arr[i]>arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }
            else break;
            }
            else{
                if(arr[i]>arr[right]){
                swap(arr[i],arr[right]);
                i=right;
            }
            else break;
            }
        }
        
    }

    int size(){
        return idx-1;
    }

    void display(){
        for(int i=1;i<=idx-1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};


int main(){
MinHeap pq;
pq.push(10);
pq.push(20);
cout<<pq.top()<<" "<<pq.size()<<" "<<pq.find(20)<<endl;
pq.display();
pq.push(11);
pq.push(2);
cout<<pq.top()<<" "<<pq.size()<<" "<<pq.find(11)<<endl;
pq.display();
pq.pop();
pq.display();
cout<<pq.top()<<" "<<pq.size()<<" "<<pq.find(2)<<endl;
pq.remove(20);
pq.display();
pq.push(15);
pq.push(19);
pq.push(3);
pq.display();
pq.remove(15);
pq.display();


    return 0;
}