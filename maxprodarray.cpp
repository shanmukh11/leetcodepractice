class Solution {
public:
    
    int maxProduct(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        else if (nums.size()==0)
            return 0;
       
        int n=nums.size();
        int prod[2],res=nums[0];
        prod[0]=nums[0];
        prod[1]=nums[0];
        for(int i=1;i<nums.size();++i)
        {
            if(nums[i]<0)
            {
                swap(prod[0],prod[1]);
            }
            prod[0]=max(nums[i],nums[i]*prod[0]);
            prod[1]=min(nums[i],nums[i]*prod[1]);
            res=max(res,prod[0]);
        }
        
       return res;    
        
    }
};