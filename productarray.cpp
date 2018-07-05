class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,1);
        int prod1,prod2;
        prod1=1;prod2=1;
        for(int i=0;i<nums.size();i++)
        {
            res[i]*=prod1;
            prod1*=nums[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            res[i]*=prod2;
            prod2*=nums[i];
        }
        return res;
    }
};