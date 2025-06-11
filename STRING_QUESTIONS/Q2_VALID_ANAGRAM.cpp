#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()){
            return false;
        }
       
        int count = s.length();
        unordered_map<char,int> map;

        for(char& ch : s){
            map[ch]++;
        }
        for(char& ch : t){
            if(map.find(ch) == map.end()){
                return false;
            }else{
                map[ch]--;
            }
            count = min(count,map[ch]);
        }
        return count == 0;
    }
};