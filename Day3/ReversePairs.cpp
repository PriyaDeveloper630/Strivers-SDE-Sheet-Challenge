class Solution {
public:
    int mergeSort(vector<int>& nums, int left, int right) {
        if (left >= right) {
            return 0;
        }

        int mid = left + (right - left) / 2;
        int count = mergeSort(nums, left, mid) + mergeSort(nums, mid + 1, right);

        int i=left;
        int j=mid+1;

        while (i<=mid && j<= right) {
            if ((long long)nums[i] > 2 * (long long)nums[j]) {
                count +=mid-i+1;
                j++;
            } else {
                i++;
            }
        }

        sort(nums.begin() + left, nums.begin() + right + 1);

        return count;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};
