#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set<char> set;
        int n = s.length();
        int i = 0;
        int j = 0;
        int maxL = 0;

        while(j < n){

            while(set.find(s[j]) != set.end()){
                set.erase(s[i]);
                i++;
            }
            set.insert(s[j]);
            maxL = max(maxL,j-i+1);
            j++;
        }
        return maxL;
    }
};