#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

class Solution {
public:
    
    vector<int> getRightMax(vector<int>& height) {

        int n = height.size();
        vector<int> prefix(n,0);
        prefix[0] = height[0];

        for(int i=1; i<n; i++){
            prefix[i] = max(height[i],prefix[i-1]);
        }
        return prefix;
    }

    vector<int> getLeftMax(vector<int>& height) {

        int n = height.size();
        vector<int> suffix(n,0);
        suffix[n-1] = height[n-1];

        for(int i=n-2; i>=0; i--){
            suffix[i] = max(height[i],suffix[i+1]);
        }
        return suffix;
    }

    int max(int a, int b){

        return a < b ? b : a;
    }
    int trap(vector<int>& height) {
        
        // Approach 1 using Prefix || Suffix Sum T.C O(N) S.C O(N) 
        vector<int> rightMax = getRightMax(height);
        vector<int> leftMax = getLeftMax(height);
        int n = height.size();
        int ans = 0;

        for(int i=0; i<n; i++){
            ans += min(rightMax[i],leftMax[i]) - height[i];
        }

        return ans;
        
        //Approach 2 using Two Pointer T.C O(N) , S.C O(1) 
        int n = height.size();
        int left = 0;
        int right = n-1;
        int maxWater = 0;
        int leftMaxi = 0;
        int rightMaxi = 0;

        while(left < right){
            leftMaxi = max(leftMaxi,height[left]);
            rightMaxi = max(rightMaxi,height[right]);

            if(height[left] <= height[right]){
                maxWater += leftMaxi - height[left];
                left++;
            }else{
                maxWater += rightMaxi - height[right];
                right--;
            }
        }
        return maxWater;
    }
};