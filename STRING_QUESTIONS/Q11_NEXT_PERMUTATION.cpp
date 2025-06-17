#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


//Approach 1 using bulting function 

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        
        next_permutation(arr.begin(),arr.end());
    }
};

//Approach 2 swaping method 

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        
        int n = arr.size();
        int idx = -1;
        
        for(int i=n-1; i>0; i--){
            if(arr[i] > arr[i-1]){
                idx = i-1;
                break;
            }
        }
        if(idx != -1){
            int swap_idx = idx;
            for(int i=n-1; i>=idx+1; i--){
                if(arr[i] > arr[idx]){
                    swap_idx = i;
                    break;
                }
            }
            swap(arr[idx],arr[swap_idx]);
        }
        reverse(arr.begin()+idx+1,arr.end());
    }
};