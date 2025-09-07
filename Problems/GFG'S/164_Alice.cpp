#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string reachAlice(int d, int x, int y, int k) {
        int w =d/x;
        int b =d/y +k;
       return (w<=b)? "Walk":"Bike";
    }
};
int main(){
    return 0;
}