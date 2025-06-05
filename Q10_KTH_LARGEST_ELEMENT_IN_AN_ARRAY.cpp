#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        //Approach 1 using sorting T.C O(n*log(n))
        sort(begin(nums),end(nums));
        int n = nums.size();
        return nums[n-k];
        

        //Approach 2 using Heap  T.C O(n*log(n))
        int n = nums.size();
        priority_queue<int,vector<int>,greater<int>> pq;

        for(int i=0; i<n; i++){
            pq.push(nums[i]);

            if(pq.size() > k){
                pq.pop();
            }
        }
        return pq.top();
    }
};