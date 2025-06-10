#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

class Solution {
  public:
  
    static bool myComp(int &a, int &b) {
        
        string s1 = to_string(a);
        string s2 = to_string(b);
        
        return s1+s2 > s2+s1;
    }
    string findLargest(vector<int> &arr) {
        // code here
        int sum = accumulate(arr.begin(),arr.end(),0);
        if(sum == 0){
            return "0";
        }
        sort(arr.begin(),arr.end(),myComp);
        string ans = "";
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            ans += to_string(arr[i]);
        }
        
        return ans;
    }
};