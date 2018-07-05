class Solution {
public:
    /*int robfunc(vector<int>& nums, int i)
    {
        if(i==nums.size()-1)
            return nums[i];
        else if(i>=nums.size())
            return 0;
        int v1=robfunc(nums,i+2);
        int v2=robfunc(nums,i+3);
        int v3=robfunc(nums,i+4);
        return max(max(v2,v1)+nums[i],max(v2,v3)+nums[i+1]);
        
    }*/
    int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        else if(nums.size()==1)
            return nums[0];
        int res[nums.size()];
        res[0]=nums[0];
        res[1]=max(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++)
        {
            res[i]=max(res[i-2]+nums[i],res[i-1]);
        }
        return res[nums.size()-1];
    }
};