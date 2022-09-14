//medianInARowWiseSortedMatrix
//https://leetcode.com/problems/median-in-a-row-wise-sorted-matrix/
//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Median in a Row-Wise Sorted Matrix.
//Memory Usage: 6.1 MB, less than 100.00% of C++ online submissions for Median in a Row-Wise Sorted Matrix.
#include<bits/stdc++.h>
class Solution {
public:
    double findMedian(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        if (n == 2) return (nums[0] + nums[1]) / 2.0;
        int mid = n / 2;
        if (n % 2 == 0) {
            return (nums[mid] + nums[mid - 1]) / 2.0;
        } else {
            return nums[mid];
        }
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        if (m > n) return findMedianSortedArrays(nums2, nums1);
        int i = 0, j = 0, half = (m + n + 1) / 2;
        while (i <= m && j <= n) {
            if (i == m) {
                return findMedian(nums2.substr(j, n - j));
            } else if (j == n) {
                return findMedian(nums1.substr(i, m - i));
            } else if (nums1[i] < nums2[j]) {
                if (half - i <= m - i) {
                    return findMedian(nums1.substr(i, m - i));
                } else {
                    i++;
                }
            } else {
                if (half - j <= n - j) {
                    return findMedian(nums2.substr(j, n - j));
                } else {
                    j++;
                }
            }
        }
        return 0;
    }
}
