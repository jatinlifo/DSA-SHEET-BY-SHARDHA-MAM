#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {

        unordered_set<int> set;
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            if(set.find(target - arr[i]) != set.end()){
                return true;
            }
            set.insert(arr[i]);
        }
        
        return false;
    }
};