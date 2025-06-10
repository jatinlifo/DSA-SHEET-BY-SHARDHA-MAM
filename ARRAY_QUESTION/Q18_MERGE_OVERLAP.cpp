#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        sort(arr.begin(),arr.end());
        int n = arr.size();
        vector<vector<int>> ans;
        ans.push_back(arr[0]);
        
        for(int i=1; i<n; i++){
            
            if(arr[i][0] <= ans.back()[1]){
                ans.back()[1] = max(arr[i][1],ans.back()[1]);
            }else{
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};