#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        
        stack<char> st;
        string ans = "";
        
        for(char& ch : s){
            
            if(st.empty()){
                st.push(ch);
                continue;
            }
            else if(st.top() == ch){
                st.pop();
            }
            else{
                ans += st.top();
                st.pop();
            }
            st.push(ch);
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};