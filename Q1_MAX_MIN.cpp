#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        
        int mi = INT_MAX;
        int mx = INT_MIN;
        
        for(auto& val : arr){
            mi = min(mi,val);
            mx = max(mx,val);
        }
        return {mi,mx};
    }
};