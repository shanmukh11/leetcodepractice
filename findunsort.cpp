class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> v=nums;
        sort(v.begin(),v.end());
        int l=nums.size(),i=0;
        if(l==0) return 0;
        while(v[i]==nums[i]&&i<nums.size())
        {
            i++;
            l--;
        }
        if(i==nums.size())
            return 0;
        i=nums.size()-1;
        while(v[i]==nums[i])
        {
            i--;
            l--;
        }
        return l;
    }
};