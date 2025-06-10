#include<iostream>
#include<vector>
using namespace std;

class Solution{ 

    public:

    void solve(vector<int>& nums, int i, int r, vector<int>& curr, vector<vector<int>>& ans) {

        if(curr.size() == r){
            ans.push_back(curr);
            return;
        }

        for(int j=i; j<nums.size(); j++){
            
            curr.push_back(nums[j]);
            solve(nums,j+1,r,curr,ans);
            curr.pop_back();
        }
    }

    vector<vector<int>> findCombinations(vector<int>&nums, int r) {

        vector<vector<int>> ans;
        vector<int> curr;

        solve(nums,0,r,curr,ans);

        return ans;
    }

};

int main() {

    int n;
    cout<<"Enter the size an array: ";
    cin >> n;
    vector<int> nums(n);
    cout<<"Enter the element's an Array : ";

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    int r;
    cout<<"Enter the number or exact Element :";
    cin >> r;
    cout<<"All combinations are :"<<endl;
    
    Solution obj;
    vector<vector<int>> ans = obj.findCombinations(nums,r);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}