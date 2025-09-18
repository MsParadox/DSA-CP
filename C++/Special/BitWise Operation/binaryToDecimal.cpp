#include<iostream>
using namespace std;
int btod(string &binary){
int n=binary.size();
int res=0;
for (int i = n-1; i >=0; i--)
{
    char ch =binary[i];
    int num = ch-'0';
    res += num*(1<<(n-i-1));
}
return res;

}
int main (){

    //1<<x = 2^x
    string s ="001101";
    cout<<btod(s);
    return 0;
}