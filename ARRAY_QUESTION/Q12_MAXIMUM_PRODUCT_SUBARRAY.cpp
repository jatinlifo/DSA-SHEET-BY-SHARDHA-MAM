#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        int maxProduct = nums[0];
        int product = 1;

        for(int i=0; i<n; i++){
            product = (product * nums[i]);
            maxProduct = max(maxProduct,product);
            
            if(product == 0){
                product = 1;
            }
        }
        product = 1;
        
        for(int i=n-1; i>=0; i--){
            product = (product * nums[i]);
            maxProduct = max(maxProduct,product);

            if(product == 0){
                product = 1;
            }
        }
        return maxProduct;
    }
};