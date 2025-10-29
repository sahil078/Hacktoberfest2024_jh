/*
Problem: Find the Peak Element in an array.

A peak element is one that is greater than its neighbors.
Given an integer array `nums`, return the index of a peak element.
You may assume that there is always at least one peak element.

Example:
Input: nums = [1,2,3,1]
Output: 2
Explanation: nums[2] = 3 is greater than nums[1] and nums[3]
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n - 1;
        
        while (l < r) {
            int mid = l + (r - l) / 2;
            
         
            if (nums[mid] > nums[mid + 1]) {
                r = mid;
            }
   
            else {
                l = mid + 1;
            }
        }
        return l; 
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int peakIndex = obj.findPeakElement(nums);
    cout << "The index of a peak element is: " << peakIndex << endl;
    cout << "The peak element is: " << nums[peakIndex] << endl;

    return 0;
}
