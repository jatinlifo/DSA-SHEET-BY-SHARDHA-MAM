#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        
        sort(strs.begin(),strs.end());
        string s1 = strs[0];
        string s2 = strs[strs.size()-1];
        string ans = "";
        int i = 0;
        int j = 0;


        while(i<s1.length() && j<s2.length()){

            if(s1[i] == s2[j]){
                ans += s1[i];
                i++;
                j++;
            }
            else{
                break;
            }
        }
        return ans;    
    }
};