#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        
        sort(begin(nums),end(nums));
        vector<vector<int> > ans;

        for(int i=0; i<n; i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            int L = i+1;
            int R = n-1;

            while(L < R){
                int sum = nums[i] + nums[L] + nums[R];

                if(sum > 0){
                    R--;
                }else if(sum < 0){
                    L++;
                }else{
                    ans.push_back({nums[i],nums[L],nums[R]});
                    L++;
                    R--;
                    while(L < R && nums[L] == nums[L-1]){
                        L++;
                    }
                }
            }
        }
        return ans;
    }
};