#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        
        
        //Approach 1 using sorting T.C O(n*log(n)) S.C O(1) 
        sort(arr.begin(),arr.end());
        
        return arr[k-1];
        
        //Approach 2 using frequency and keep trak T.C O(m+(max_element)) S.C O(max_element)
        int max = *max_element(begin(arr),end(arr));
        vector<int> freq(max,0);
        
        for(auto& ele : arr){
            freq[ele-1]++;
        }
        int count = 0;
        int n = freq.size();
        
        for(int i=0; i<n; i++){
            count += freq[i];
            if(count == k){
                return i+1;
            }
        }
        return -1;
    }
};