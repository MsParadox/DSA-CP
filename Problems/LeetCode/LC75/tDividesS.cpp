#include<bits/stdc++.h>
#include<numeric>
using namespace std;
string gcdOfStrings(string str1, string str2) {
        return (str1 + str2 == str2 + str1)? 
        str1.substr(0, __gcd(str1.length(),str2.length())): "";
    }

int main(){
    cout<<gcdOfStrings("ABABABAB","AB");

    return 0;
}