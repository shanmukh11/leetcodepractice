class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> counts(256,0);
        int ans=0;
        if(s.size()==0)
            return ans;
        int i=0,j=0;
        while(i<s.size()&&j<s.size())
        {
            if(counts[(int)s[j]]==0)
            {
                counts[(int)s[j]]+=1;
                j++;
                ans=max(ans,j-i);
            }
            else 
            {
                i++;
                counts[(int)s[i-1]]-=1;
            }
        }
        return ans;
    }
};