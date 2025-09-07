#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string f(string s){
     s.push_back(' ');
        string st;
        vector<string> v;
        for(auto c: s) {
            if(c == ' ') {
                if(st.size()) {
                    st.push_back(' ');
                    v.push_back(st);
                }
                st.clear();
            }
            else st.push_back(c);
        }
        string ans;
        reverse(v.begin(), v.end());
        for(auto x: v) ans += x;
        ans.pop_back();
        return ans;
}
int main(){
    string s ="the sky is blue";
    cout<<f(s);

    return 0;
}