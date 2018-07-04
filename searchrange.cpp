class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1,mid;
        int lpos=-1,rpos=-1;
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
            else if(nums[mid]==target&&(nums[mid-1]!=target||mid==0))
            {
                lpos=mid;
                break;
            }
            else
            {
                right=mid-1;
            }
        }
        left=0;
        right=nums.size()-1;
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
            else if(nums[mid]==target&&(nums[mid+1]!=target||mid==nums.size()-1))
            {
                rpos=mid;
                break;
            }
            else
            {
                left=mid+1;
            }
        }
        vector<int> v{lpos,rpos};
        return v;
    }
};