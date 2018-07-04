class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pos,left=0,right=nums.size()-1,mid;
        if(nums.size()==0)
            return -1;
        if(nums.size()==1)
        {
            if(nums[0]==target)
                return 0;
            else return -1;
        }
        while(left<=right)
        {
            mid=(left+right)/2;
            if(nums[mid]<nums[mid+1]&&nums[mid]>nums[0])
                left=mid+1;
            else if(nums[mid]>nums[mid+1])
            {
                pos=mid+1;
                break;
            }
            else right=mid-1;
        }
        if(target==nums[pos])
            return pos;
        else if(target>=nums[0])
        {
            left=0;
            right=pos-1;
        }
        else if(target<nums[0])
        {
            left=pos;
            right=nums.size()-1;
        }
        while(left<=right)
        {
            mid=(left+right)/2;
            if(nums[mid]>target)
            {
                right=mid-1;
            }
            else if(nums[mid]<target)
            {
                left=mid+1;
            }
            else return mid;
        }
        return -1;
    }
};