#include<iostream>
#include<string>
#include<cstring>
using namespace std;


// Approach 1 using two loops and another palindrome check function iterative method  T.C O(n*n*n) 
class Solution {
public:
    
    bool isPalindrome(int i, int j, string& s) {

        while(i < j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int countSubstrings(string s) {
        
        int n = s.length();
        int count = 0;

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(isPalindrome(i,j,s)){
                    count++;
                }
            }
        }

        return count;
    }
};

// Approach 2 using two loops and another palindrome check function Recursion method  T.C O(n*n*n) 

class Solution {
public:
    
    bool isPalindrome(int i, int j, string& s) {

        if(i > j){
            return true;
        }
        if(s[i] == s[j]){
            return isPalindrome(i+1,j-1,s);
        }
        return false;
    }
    int countSubstrings(string s) {
        
        int n = s.length();
        int count = 0;

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(isPalindrome(i,j,s)){
                    count++;
                }
            }
        }

        return count;
    }
};

// Approach 3 using two loops and another palindrome check function Recursion + Memoization optimize method  T.C O(n*n*n) 

class Solution {
public:
    
    int dp[1001][1001];

    bool isPalindrome(int i, int j, string& s) {

        if(i > j){
            return true;
        }
        if(s[i] == s[j]){
            return dp[i][j] = isPalindrome(i+1,j-1,s);
        }
        return dp[i][j] =  false;
    }
    int countSubstrings(string s) {
        
        memset(dp,-1,sizeof(dp));
        int n = s.length();
        int count = 0;

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(isPalindrome(i,j,s)){
                    count++;
                }
            }
        }

        return count;
    }
};


// Approach 4 using two loops only T.C O(n*n) 




