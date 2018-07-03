class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> res{};
        if(nums.size()==0)
            return res;
        if(nums[0]>1)
        {
            int n=1;
            while(n<nums[0])
               res.push_back(n++);
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            
            if(nums[i+1]-nums[i]>1)
            {
                int n=nums[i]+1;
                while(n<nums[i+1])
                    res.push_back(n++);
            }
        }
        if(nums[nums.size()-1]<nums.size())
        {
            int n=nums[nums.size()-1]+1;
            while(n<=nums.size())
               res.push_back(n++);
        }
        return res;
    }
};