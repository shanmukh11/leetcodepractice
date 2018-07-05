class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int ct=1,c=nums[nums.size()-1];
        if(k==1) return c;
        return nums[nums.size()-k];
        
    }
};