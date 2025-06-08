#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n = height.size();
        int maxWater = 0;
        int left = 0;
        int right = n-1;

        while(left < right){
            maxWater = max(maxWater,(right-left)*min(height[left],height[right]));
            
            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxWater;
    }
};