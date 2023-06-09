class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n= nums.size();
        vector<int> count(n, 0);

        for (int i=0; i<n; i++) {
            if(count[nums[i]]==1) {
                return nums[i];
            }else{
                count[nums[i]]++;
            }
        }

        // If no duplicate found, return -1 or appropriate value
        return -1;
    }
};
