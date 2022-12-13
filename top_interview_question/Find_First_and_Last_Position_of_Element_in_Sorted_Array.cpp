#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

// function to find lower index of any target
// if we want to find the higher index of target we call for(target+1) and subtract 1 from it.
    int binary(vector<int> &nums, int target)
    {
        int i = 0;
        int j = nums.size() - 1;
        while (i <= j)
        {
            int mid = i + (j - i) / 2;
            if (nums[mid] < target)
            {
                i = mid + 1;
            }
            else
            {

                j = mid - 1;
            }
        }
        return j + 1;
    }

    vector<int> searchRange(vector<int> &nums, int target)
    {
        if (nums.size() == 0)
            return {-1, -1};
        int s = binary(nums, target);
        int e = binary(nums, target + 1) - 1;
        if (s < 0 || s >= nums.size() || nums[s] != target)
            return {-1, -1};
        return {s, e};
    }
};

// more easy solution
/*

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {BinarySearch(nums, target, "FIRST"), BinarySearch(nums, target, "LAST")};
    }
    
    int BinarySearch(vector<int> nums, int num, string find) {
        int left = 0, right = nums.size() - 1, mid;
        int result = -1;

        while (left <= right) {
            mid = (left + right) / 2;

            if (nums[mid] == num) {
                result = mid;
                (find == "FIRST") ? right = mid - 1 : left = mid + 1;
            }
            else if (nums[mid] > num) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        return result;
    }
};

*/


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
    }
}

