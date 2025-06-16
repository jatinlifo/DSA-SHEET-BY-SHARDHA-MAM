#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;

class Solution {
public:
    
    int dp[1001][1001];
    bool check(int i, int j, string& s) {

        if(i > j){
            return true;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        if(s[i] == s[j]){
            return dp[i][j] = check(i+1,j-1,s);
        }
        return dp[i][j] = false;
    }
    string longestPalindrome(string s) {
        
        memset(dp,-1,sizeof(dp));
        int start = 0;
        int maxL = 0;
        int n = s.length();

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(check(i,j,s)){
                    if(j-i+1 > maxL){
                        start = i;
                        maxL = j-i+1;
                    }
                }
            }
        }
        return s.substr(start,maxL);
    }
};