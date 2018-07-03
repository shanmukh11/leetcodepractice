class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;++i)
        {
            if(nums[i]==0)
            {
                nums.erase(nums.begin()+i);
                nums.insert(nums.begin(),1,0);
            }
            else if(nums[i]==2)
            {
                nums.erase(nums.begin()+i);
                nums.push_back(2);
                --i;--n;
            }
        }
    }
};