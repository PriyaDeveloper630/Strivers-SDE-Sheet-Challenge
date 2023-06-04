class Solution {
public:
    void sortColors(vector<int>& nums) {
       //Dutch national flag algo-->O(n)
       //Optimal approach
       int low=0;
       int mid=0;
       int n=nums.size();
       int high=n-1;
       while(mid<=high){
           if(nums[mid]==0){
               swap(nums[mid],nums[low]);
               mid++;
               low++;
           }
           else if(nums[mid]==1){
               mid++;
           }
           else{
               swap(nums[high],nums[mid]);
               high--;
           }
       }
    }
};