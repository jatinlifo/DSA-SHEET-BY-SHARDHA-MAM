#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        
        sort(a.begin(),a.end());
        
        int n = a.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int ans  =  INT_MAX;
        
        for(int i=0; i<n-m+1; i++){
            
            mini = a[i];
            maxi = a[i+m-1];
            ans = min(ans,maxi-mini);
        }
        return ans;
    }
};