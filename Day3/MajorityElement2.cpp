class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        set<int> st;
        int size=nums.size();
        map<int,int>mpp;
        for (int i = 0; i < size; i++) {
            mpp[nums[i]]++;
        }
         for (int i = 0; i < size; i++) {
            if(mpp[nums[i]]>size/3){
                st.insert(nums[i]);
            }
        }
        vector<int>ans;
        auto it=st.begin();
        for (const auto& element : st) {
            ans.push_back(element);
        }
        return ans;
    }
};