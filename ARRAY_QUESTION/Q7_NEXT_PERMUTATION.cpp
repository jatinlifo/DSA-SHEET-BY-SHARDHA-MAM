#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        //Approach 1 using bulttin function 
        // next_permutation(nums.begin(),nums.end());
        

        //Approach 2 using swaping method 
        int n = nums.size();
        int swap_idx1 = -1;

        for(int i=n-1; i>0; i--){
            if(nums[i] > nums[i-1]){
                swap_idx1 = i-1;
                break;
            }
        }
        if(swap_idx1 != -1){
            int swap_idx2 = swap_idx1;

            for(int j=n-1; j >= swap_idx1+1; j--){
                if(nums[j] > nums[swap_idx1]){
                    swap_idx2 = j;
                    break;
                }
            }
            swap(nums[swap_idx1],nums[swap_idx2]);
        }
        reverse(nums.begin()+swap_idx1+1, nums.end());
    }
};