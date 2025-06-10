#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    
    int findMinOps(vector<int> &nums)
    {

        int n = nums.size();
        int i = 0;
        int j = n - 1;
        int count = 0;

        while (i < j)
        {

            if (nums[i] == nums[j])
            {
                i++, j--;
            }
            else if (nums[i] < nums[j])
            {
                i++;
                nums[i] += nums[i - 1];
                count++;
            }
            else
            {
                j--;
                nums[j] += nums[j + 1];
                count++;
            }
        }
        return count;
    }
};

int main()
{

    int n;
    cout << "Enter the size an array : ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter teh elements an array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution obj;
    int ans = obj.findMinOps(nums);

    cout<<"Minimum Operation is : "<<ans<<endl;
    return 0;
}