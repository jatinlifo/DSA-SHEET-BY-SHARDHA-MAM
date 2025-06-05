#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int min_cost = INT_MAX;
        int max_profit = 0;
        int n = prices.size();

        for(int i=0; i<n; i++){

            if(min_cost > prices[i]){
                min_cost = prices[i];
            }else{
                max_profit = max(max_profit,prices[i] - min_cost);
            }
        }
        return max_profit;
    }
};