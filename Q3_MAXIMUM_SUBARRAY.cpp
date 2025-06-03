#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        int maxi = nums[0];
        int ans = nums[0];

        for(int i=1; i<n; i++){
            maxi  = max(maxi+nums[i],nums[i]);
            if(maxi > ans){
                ans = maxi;
            }
        }
        return ans;
    }
};