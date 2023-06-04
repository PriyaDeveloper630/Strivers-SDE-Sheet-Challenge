class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int currentSum = nums[0]; // Current sum of subarray
        int maxSum = nums[0]; // Maximum sum found so far

        for (int i = 1; i < n; i++) {
            // Update the current sum by either extending the previous subarray or starting a new subarray
            currentSum = max(nums[i], currentSum + nums[i]);
            
            // Update the maximum sum if the current sum is greater
            maxSum = max(maxSum, currentSum);
        }
        
        return maxSum;
    }
};

