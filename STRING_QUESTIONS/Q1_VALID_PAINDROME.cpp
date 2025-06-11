#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        
        transform(s.begin(),s.end(),s.begin(),::tolower);
        
        string str;
        for(auto&ch : s)
        {
            if(isalnum(ch)){
                str += ch;
            }
        }
        int left = 0;
        int right = str.length()-1;
        while(left <= right)
        {
            if(str[left] != str[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};