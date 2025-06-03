#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        
        int n = arr.size();
        int left = 0;
        int right = n-1;
        
        while(left < right){
            swap(arr[left],arr[right]);
            left++,right--;
        }
        
    }
};