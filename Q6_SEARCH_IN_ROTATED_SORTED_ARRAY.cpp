#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        //Approach 1 using linear Search T.C O(N), S.c O(1) 
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                return i;
            }
        }

        //Approach 2 using Binary Search T.C. O(log(N)), S.c O(1) 
        int left = 0;
        int right = n-1;

        while(left <= right){

            int mid  = left + (right-left)/2;

            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] >= nums[left]){
                if(target >= nums[left] && target <= nums[mid]){
                    right = mid - 1;
                }else{
                    left = mid + 1; 
                }
            }
            else{
                if(target >= nums[mid] && target <= nums[right]){
                    left = mid + 1;
                }else{
                    right = mid - 1;
                }
            }
        }
        return -1;
    }
};