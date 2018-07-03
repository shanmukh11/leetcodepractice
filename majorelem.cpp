class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=1,num=nums[0];
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==0)
            return 0;
        for(int i=1;i<nums.size();++i)
        {
            if(nums[i]==num)
                c++;
            else 
            { c=1;num=nums[i];}
            if(c>nums.size()/2)
                return num;
        }
    }
};