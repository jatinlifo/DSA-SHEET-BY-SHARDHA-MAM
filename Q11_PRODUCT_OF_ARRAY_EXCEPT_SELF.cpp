#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        //Approach 1 T.C O(N) S.C O(N) using Prefix || Suffix;
        int n = nums.size();
        vector<int> prefix(n),suffix(n),ans(n);
        prefix[0] = nums[0];
        suffix[n-1] = nums[n-1];
        
        for(int i=1; i<n; i++){
            prefix[i] = prefix[i-1] * nums[i];
        }
        for(int i=n-2; i>=0; i--){
            suffix[i] = suffix[i+1] * nums[i];
        }
        ans[0] = suffix[1];
        ans[n-1] = prefix[n-2];
        for(int i=1; i<n-1; i++){
            ans[i] = suffix[i+1] * prefix[i-1];
        }
        return ans;

        //Approach 2 T.C. O(N) S.C O(1) 
        int n = nums.size();
        vector<int> ans(n,0);
        int product = 1;

        for(int i=0; i<n; i++){
            ans[i] = product;
            product *= nums[i];
        }
        product = 1;
        
        for(int i=n-1; i>=0; i--){
            ans[i] = ans[i] * product;
            product *= nums[i];
        }
        return ans;
    }
};