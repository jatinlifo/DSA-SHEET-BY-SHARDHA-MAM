#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int findMin(vector<int>& nums) {
        
         //Approach 1 using linear Search T.C  O(N) 
        int ele = *min_element(nums.begin(),nums.end());

        return ele; 


        //Approach 2 using Binary Search T.C O(long(N))
        int n = nums.size();
        int left = 0;
        int right = n-1;

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(mid+1 <= n-1 && nums[mid] > nums[mid+1]){
                return nums[mid+1];
            }
            else if(mid-1 > 0 && nums[mid] < nums[mid-1]){
                return nums[mid];
            }
            else if(nums[mid] >= nums[left]){
                left = mid + 1;
            }
            else{
                right = mid -1 ;
            }
        }
        return nums[0];
    }
};