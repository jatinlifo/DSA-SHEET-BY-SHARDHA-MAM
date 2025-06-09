#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;



class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        // Approach 1 using SET T.C O(n) , S.C O(n)
        unordered_set<int> set(nums.begin(),nums.end());

        return set.size() < nums.size();
        
        //Approach 2 using sorting T.C O(n*log(n)), S.C O(1) 
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};